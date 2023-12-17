#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <stdio.h>
#include <addmat.h>
#include <iostream>
#include <matrix.h>
#include <stack.h>
#include <queue.h>
#include <sort.h>
#include <expression_cal.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class CustomListWidgetItem : public QWidget
{
    Q_OBJECT;
public:
    CustomListWidgetItem(const QString &text, QListWidget *parent = nullptr);

    QLabel* label;
    QPushButton* button_add;
    QPushButton* button_modify;
    QPushButton* button_delete;
    QPushButton* button_cal;
    QListWidget* listWidget;
signals:
    void button_add_Clicked(CustomListWidgetItem* item);
    void button_modify_Clicked(CustomListWidgetItem* item);
    void button_delete_Clicked(QListWidgetItem* item);
    void button_cal_Clicked(CustomListWidgetItem* item);

private slots:
    void on_Button_add_Clicked();
    void on_Button_modify_Clicked();
    void on_Button_delete_Clicked();
    void on_Button_cal_Clicked();
private:

};






class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void receiveData(const QString& init_name, const QString& new_name);

    void add_mat(CustomListWidgetItem* item);
    void modify_mat(CustomListWidgetItem* item);
    void delete_mat(QListWidgetItem* item);
    void cal_mat(CustomListWidgetItem* item);

    void on_B0_clicked();
    void on_B1_clicked();
    void on_B2_clicked();
    void on_B3_clicked();
    void on_B4_clicked();
    void on_B5_clicked();
    void on_B6_clicked();
    void on_B7_clicked();
    void on_B8_clicked();
    void on_B9_clicked();

    void on_LBR_clicked();
    void on_RBR_clicked();
    void on_ADD_clicked();
    void on_MINUS_clicked();
    void on_MUL_clicked();
    void on_DIV_clicked();
    void on_POW_clicked();
    void on_TRANS_clicked();

    void on_CLR_clicked();
    void on_BACK_clicked();

    void on_EQ_clicked();

    void on_addMatrix_clicked();





private:
    Ui::Widget *ui;

    QString str = "";

    Hashtable H;
    mat tmpPMat;
};
#endif // WIDGET_H
