#ifndef ADDMAT_H
#define ADDMAT_H

#include <QWidget>
#include <QMessageBox>
#include <widget.h>
#include <matrix.h>
#include <hashtable.h>
#include <stdio.h>

namespace Ui {
class addMat;
class Widget;
}

class addMat : public QWidget
{
    Q_OBJECT
private:
    Ui::addMat *ui;
    mat* pMat = 0;
    Hashtable* h;
    QString init_name = "";
    Ui::Widget* parentui;
    bool flag_if_exits_in_hashtable = 0;

public:
    explicit addMat(mat* mat_to_modify, Hashtable* h, Ui::Widget* pui, QWidget *parent = nullptr);
    ~addMat();

private slots:
    void on_spinBox_row_valueChanged(int arg1);
    void on_spinBox_col_valueChanged(int arg2);

    void on_save_clicked();

    void on_cancel_clicked();
signals:
    void sendData(const QString& int_name, const QString& new_name);


};

#endif // ADDMAT_H
