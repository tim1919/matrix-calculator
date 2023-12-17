#include "addmat.h"
#include "ui_addmat.h"

addMat::addMat(mat* mat_to_modify, Hashtable* h, Ui::Widget* pui, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addMat)
{
    ui->setupUi(this);
    this->setWindowTitle("添加/修改矩阵");

    ui->modifyMat->setColumnCount((*mat_to_modify).row);
    ui->modifyMat->setRowCount((*mat_to_modify).col);

    parentui = pui;
    for (int i = 0; i < (*mat_to_modify).row; ++i)
    {
        for (int j = 0; j < (*mat_to_modify).col; ++j)
        {
            QTableWidgetItem* item = new QTableWidgetItem(QString::number((*mat_to_modify)[i][j]));
            ui->modifyMat->setItem(i, j, item);
        }
    }

    ui->spinBox_row->setValue((*mat_to_modify).row);
    ui->spinBox_col->setValue((*mat_to_modify).col);
    ui->matName->setText((*mat_to_modify).name);
    pMat = mat_to_modify;
    init_name = mat_to_modify->name;
    this->h = h;
}

addMat::~addMat()
{
    delete ui;
}

void addMat::on_spinBox_row_valueChanged(int arg1)
{
    ui->modifyMat->setRowCount(arg1);
}

void addMat::on_spinBox_col_valueChanged(int arg2)
{
    ui->modifyMat->setColumnCount(arg2);
}

void addMat::on_save_clicked()
{
    if (ui->matName->text().isEmpty())
    {
        QMessageBox::warning(this, QStringLiteral("Error!"), QStringLiteral("矩阵名为空，请重新设置！"), QMessageBox::Ok);
        return;
    }

    int num_of_digit = 0, num_of_letter = 0;
    for (int i = 0; i < ui->matName->text().length(); ++i)
    {
        if (ui->matName->text()[i].isDigit())
        {
            ++num_of_digit;
        }
        else if (ui->matName->text()[i].isLetter())
        {
            ++num_of_letter;
        }
    }

    if (num_of_digit + num_of_letter < ui->matName->text().length())
    {
        QMessageBox::warning(this, QStringLiteral("Error!"), QStringLiteral("矩阵名只能为数字和字母的组合，请重新设置！"), QMessageBox::Ok);
        return;
    }

    if (0 == num_of_letter)
    {
        QMessageBox::warning(this, QStringLiteral("Error!"), QStringLiteral("矩阵名不能为纯数字，请重新设置！"), QMessageBox::Ok);
        return;
    }


    mat newmat;
    newmat.init(ui->spinBox_row->value(), ui->spinBox_col->value(), ui->matName->text());
    for (int i = 0; i < newmat.row; ++i)
    {
        for (int j = 0; j < newmat.col; ++j)
        {
            QTableWidgetItem* pItem = ui->modifyMat->item(i, j);
            if (nullptr == pItem)
            {
                newmat[i][j] = 0;
            }
            else
            {
                bool ok;
                float val = pItem->text().toDouble(&ok);
                if (!ok)
                {
                    QMessageBox::warning(this, QStringLiteral("Error!"), tr("矩阵第 %1 行 第 %2 列含有非法字符，请重新输入！").arg(i).arg(j), QMessageBox::Ok);
                    return;
                }
                newmat[i][j] = val;
            }
        }
    }

    if (0 != (*h)[newmat.name])
    {
        int flg = QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("已存在该名称的矩阵，确认覆盖吗？"), QMessageBox::Ok | QMessageBox::Cancel);
        if (flg == QMessageBox::Cancel)
        {
            return;
        }
    }
    h->remove(init_name);
    h->remove(newmat.name);
    h->insert(newmat);

    this->close();

    emit sendData(init_name, newmat.name);
}

void addMat::on_cancel_clicked()
{
    int flg = QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确认不保存退出吗？"), QMessageBox::Ok | QMessageBox::Cancel);
    if (flg == QMessageBox::Ok)
    {
        this->close();
    }
}
