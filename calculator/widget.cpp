#include "widget.h"
#include "ui_widget.h"

CustomListWidgetItem::CustomListWidgetItem(const QString &text, QListWidget *parent)
    : QWidget(parent), listWidget(parent)
{

    QHBoxLayout *layout = new QHBoxLayout(this);

    label = new QLabel(text);
    layout->addWidget(label);

    button_add = new QPushButton("加入计算", this);
    layout->addWidget(button_add);

    button_modify = new QPushButton("查看/修改", this);
    layout->addWidget(button_modify);

    button_delete = new QPushButton("删除", this);
    layout->addWidget(button_delete);

    button_cal = new QPushButton("计算行列式");
    layout->addWidget(button_cal);

    connect(button_add, &QPushButton::clicked, this, &CustomListWidgetItem::on_Button_add_Clicked);
    connect(button_modify, &QPushButton::clicked, this, &CustomListWidgetItem::on_Button_modify_Clicked);
    connect(button_delete, &QPushButton::clicked, this, &CustomListWidgetItem::on_Button_delete_Clicked);
    connect(button_cal, &QPushButton::clicked, this, &CustomListWidgetItem::on_Button_cal_Clicked);
}

void CustomListWidgetItem::on_Button_add_Clicked()
{
    emit button_add_Clicked(this);
}

void CustomListWidgetItem::on_Button_modify_Clicked()
{
//    emit button_modify_Clicked(listWidget->itemAt(mapToParent(button_modify->pos())));
    emit button_modify_Clicked(this);
}

void CustomListWidgetItem::on_Button_delete_Clicked()
{
    emit button_delete_Clicked(listWidget->itemAt(mapToParent(button_modify->pos())));
}

void CustomListWidgetItem::on_Button_cal_Clicked()
{
    emit button_cal_Clicked(this);
}







Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("Matrix Calculator");

    QFont f("仿宋", 14);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::receiveData(const QString& init_name, const QString& new_name)
{
//    std::cout << "67::" << data.toStdString() << std::endl;

    for (int i = 0; i < ui->matList->count(); ++i)
    {
        QListWidgetItem* item = ui->matList->item(i);
        if (item)
        {
            CustomListWidgetItem* customWidget = qobject_cast<CustomListWidgetItem*>(ui->matList->itemWidget(item));
            if (init_name == customWidget->label->text())//若在列表中找到了父窗口发来的矩阵名字
            {
                delete item;
            }
        }
    }

    for (int i = 0; i < ui->matList->count(); ++i)
    {
        QListWidgetItem* item = ui->matList->item(i);
        if (item)
        {
            CustomListWidgetItem* customWidget = qobject_cast<CustomListWidgetItem*>(ui->matList->itemWidget(item));
            if (new_name == customWidget->label->text())//若在列表中找到了父窗口发来的矩阵名字
            {
                return;
            }
        }
    }

    CustomListWidgetItem* customItem = new CustomListWidgetItem(new_name, ui->matList);
    QListWidgetItem* item = new QListWidgetItem(ui->matList);
    item->setSizeHint(customItem->sizeHint());
    ui->matList->setItemWidget(item, customItem);


    connect(customItem, &CustomListWidgetItem::button_add_Clicked, this, &Widget::add_mat);
    connect(customItem, &CustomListWidgetItem::button_modify_Clicked, this, &Widget::modify_mat);
    connect(customItem, &CustomListWidgetItem::button_delete_Clicked, this, &Widget::delete_mat);
    connect(customItem, &CustomListWidgetItem::button_cal_Clicked, this, &Widget::cal_mat);
}

void Widget::add_mat(CustomListWidgetItem* item)
{
    str += item->label->text();
    ui->display->setText(str);
}

void Widget::modify_mat(CustomListWidgetItem* item)
{

    addMat* addMatrix = new addMat(H[item->label->text()], &H, ui);
    connect(addMatrix, &addMat::sendData, this, &Widget::receiveData);
    addMatrix->setWindowModality(Qt::ApplicationModal);//设置操作子窗口时无法操作父窗口
    addMatrix->show();

}

void Widget::delete_mat(QListWidgetItem* item)
{
    int flg = QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确认删除吗？"), QMessageBox::Ok | QMessageBox::Cancel);
    if (flg == QMessageBox::Cancel)
    {
        return;
    }
    else
    {
        CustomListWidgetItem* customWidget = qobject_cast<CustomListWidgetItem*>(ui->matList->itemWidget(item));
        H.remove(customWidget->label->text());
        delete item;
    }
}

void Widget::cal_mat(CustomListWidgetItem* item)
{
    tmpPMat.init(1, 1);
//    (*H[item->label->text()]).print_on_terminal();
    tmpPMat[0][0] = (*H[item->label->text()]).get_determinant_val();
//    (*H[item->label->text()]).print_on_terminal();
//    std::cout << "??" << std::endl;
    addMat* addMatrix = new addMat(&tmpPMat, &H, ui);
    connect(addMatrix, &addMat::sendData, this, &Widget::receiveData);
    addMatrix->setWindowModality(Qt::ApplicationModal);//设置操作子窗口时无法操作父窗口
    addMatrix->show();
}

void Widget::on_B0_clicked()
{
    str += '0';
    ui->display->setText(str);
}

void Widget::on_B1_clicked()
{
    str += '1';
    ui->display->setText(str);
}

void Widget::on_B2_clicked()
{
    str += '2';
    ui->display->setText(str);
}

void Widget::on_B3_clicked()
{
    str += '3';
    ui->display->setText(str);
}

void Widget::on_B4_clicked()
{
    str += '4';
    ui->display->setText(str);
}

void Widget::on_B5_clicked()
{
    str += '5';
    ui->display->setText(str);
}

void Widget::on_B6_clicked()
{
    str += '6';
    ui->display->setText(str);
}

void Widget::on_B7_clicked()
{
    str += '7';
    ui->display->setText(str);
}

void Widget::on_B8_clicked()
{
    str += '8';
    ui->display->setText(str);
}

void Widget::on_B9_clicked()
{
    str += '9';
    ui->display->setText(str);
}

void Widget::on_ADD_clicked()
{
    str += '+';
    ui->display->setText(str);
}

void Widget::on_MINUS_clicked()
{
    str += '-';
    ui->display->setText(str);
}

void Widget::on_MUL_clicked()
{
    str += '*';
    ui->display->setText(str);
}

void Widget::on_DIV_clicked()
{
    str += '/';
    ui->display->setText(str);
}

void Widget::on_POW_clicked()
{
    str += '^';
    ui->display->setText(str);
}

void Widget::on_TRANS_clicked()
{
    str += "^T";
    ui->display->setText(str);
}

void Widget::on_LBR_clicked()
{
    str += '(';
    ui->display->setText(str);
}

void Widget::on_RBR_clicked()
{
    str += ')';
    ui->display->setText(str);
}

void Widget::on_CLR_clicked()
{
    str.clear();
    ui->display->clear();
}

void Widget::on_BACK_clicked()
{
    str.chop(1);//将字符串删除一个
    ui->display->setText(str);
}

void Widget::on_EQ_clicked()//计算结果
{
    format(str);
    Queue<QString> q = inOrder2postOrder(str);
    mat result = postOrder_cal(H, q);
    if ("__err" == result.name)
    {
        QMessageBox::warning(this, QStringLiteral("错误！"), QStringLiteral("表达式含有未知矩阵，请检查！"), QMessageBox::Ok | QMessageBox::Cancel);
        return;
    }

//    result.print_on_terminal();
    addMat* addMatrix = new addMat(&result, &H, ui);
    connect(addMatrix, &addMat::sendData, this, &Widget::receiveData);
    addMatrix->setWindowModality(Qt::ApplicationModal);//设置操作子窗口时无法操作父窗口
    addMatrix->show();
}


void Widget::on_addMatrix_clicked()
{
    tmpPMat.init(0, 0);
//    printf("add:  %#x  from 61\n", &mat_to_add);
    addMat* addMatrix = new addMat(&tmpPMat, &H, ui);
    connect(addMatrix, &addMat::sendData, this, &Widget::receiveData);
    addMatrix->setWindowModality(Qt::ApplicationModal);//设置操作子窗口时无法操作父窗口
    addMatrix->show();
}








