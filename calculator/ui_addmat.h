/********************************************************************************
** Form generated from reading UI file 'addmat.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMAT_H
#define UI_ADDMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addMat
{
public:
    QTableWidget *modifyMat;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spinBox_row;
    QSpinBox *spinBox_col;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *matName;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QWidget *addMat)
    {
        if (addMat->objectName().isEmpty())
            addMat->setObjectName(QString::fromUtf8("addMat"));
        addMat->resize(1300, 1000);
        addMat->setMinimumSize(QSize(1300, 1000));
        addMat->setMaximumSize(QSize(1300, 1000));
        modifyMat = new QTableWidget(addMat);
        modifyMat->setObjectName(QString::fromUtf8("modifyMat"));
        modifyMat->setGeometry(QRect(10, 20, 960, 960));
        modifyMat->setMinimumSize(QSize(960, 960));
        modifyMat->setMaximumSize(QSize(960, 960));
        widget = new QWidget(addMat);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(990, 340, 306, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        spinBox_row = new QSpinBox(widget);
        spinBox_row->setObjectName(QString::fromUtf8("spinBox_row"));
        spinBox_row->setMinimumSize(QSize(100, 40));
        spinBox_row->setMaximumSize(QSize(100, 40));

        horizontalLayout_3->addWidget(spinBox_row);

        spinBox_col = new QSpinBox(widget);
        spinBox_col->setObjectName(QString::fromUtf8("spinBox_col"));
        spinBox_col->setMinimumSize(QSize(100, 40));
        spinBox_col->setMaximumSize(QSize(100, 40));

        horizontalLayout_3->addWidget(spinBox_col);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        matName = new QLineEdit(widget);
        matName->setObjectName(QString::fromUtf8("matName"));
        matName->setMinimumSize(QSize(210, 50));
        matName->setMaximumSize(QSize(210, 50));

        horizontalLayout_2->addWidget(matName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        save = new QPushButton(widget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setMinimumSize(QSize(0, 40));
        save->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(save);

        cancel = new QPushButton(widget);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setMinimumSize(QSize(0, 40));
        cancel->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(addMat);

        QMetaObject::connectSlotsByName(addMat);
    } // setupUi

    void retranslateUi(QWidget *addMat)
    {
        addMat->setWindowTitle(QCoreApplication::translate("addMat", "Form", nullptr));
        label->setText(QCoreApplication::translate("addMat", "\347\237\251\351\230\265\345\260\272\345\257\270\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("addMat", "\347\237\251\351\230\265\345\220\215\357\274\232", nullptr));
        save->setText(QCoreApplication::translate("addMat", "\344\277\235\345\255\230", nullptr));
        cancel->setText(QCoreApplication::translate("addMat", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMat: public Ui_addMat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMAT_H
