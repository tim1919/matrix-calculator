/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *display;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *matList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addMatrix;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *TRANS;
    QPushButton *B3;
    QPushButton *RBR;
    QPushButton *B7;
    QPushButton *POW;
    QPushButton *ADD;
    QPushButton *B6;
    QPushButton *B5;
    QPushButton *MUL;
    QPushButton *B2;
    QPushButton *B0;
    QPushButton *MINUS;
    QPushButton *B9;
    QPushButton *EQ;
    QPushButton *DIV;
    QPushButton *B8;
    QPushButton *LBR;
    QPushButton *B1;
    QPushButton *B4;
    QPushButton *CLR;
    QPushButton *BACK;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1100, 800);
        Widget->setMinimumSize(QSize(1100, 800));
        Widget->setMaximumSize(QSize(1100, 800));
        display = new QLineEdit(Widget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(10, 10, 461, 81));
        display->setReadOnly(true);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 10, 591, 788));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        matList = new QListWidget(widget);
        matList->setObjectName(QString::fromUtf8("matList"));
        matList->setMinimumSize(QSize(580, 720));
        matList->setMaximumSize(QSize(580, 720));
        matList->setMouseTracking(true);
        matList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        matList->setSortingEnabled(true);

        verticalLayout->addWidget(matList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addMatrix = new QPushButton(widget);
        addMatrix->setObjectName(QString::fromUtf8("addMatrix"));

        horizontalLayout->addWidget(addMatrix);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 100, 461, 691));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TRANS = new QPushButton(widget1);
        TRANS->setObjectName(QString::fromUtf8("TRANS"));
        TRANS->setMinimumSize(QSize(120, 120));
        TRANS->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(TRANS, 3, 3, 1, 1);

        B3 = new QPushButton(widget1);
        B3->setObjectName(QString::fromUtf8("B3"));
        B3->setMinimumSize(QSize(120, 120));
        B3->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B3, 4, 2, 1, 1);

        RBR = new QPushButton(widget1);
        RBR->setObjectName(QString::fromUtf8("RBR"));
        RBR->setMinimumSize(QSize(120, 120));
        RBR->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(RBR, 5, 2, 1, 1);

        B7 = new QPushButton(widget1);
        B7->setObjectName(QString::fromUtf8("B7"));
        B7->setMinimumSize(QSize(120, 120));
        B7->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B7, 2, 0, 1, 1);

        POW = new QPushButton(widget1);
        POW->setObjectName(QString::fromUtf8("POW"));
        POW->setMinimumSize(QSize(120, 120));
        POW->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(POW, 2, 3, 1, 1);

        ADD = new QPushButton(widget1);
        ADD->setObjectName(QString::fromUtf8("ADD"));
        ADD->setMinimumSize(QSize(120, 120));
        ADD->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(ADD, 1, 0, 1, 1);

        B6 = new QPushButton(widget1);
        B6->setObjectName(QString::fromUtf8("B6"));
        B6->setMinimumSize(QSize(120, 120));
        B6->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B6, 3, 2, 1, 1);

        B5 = new QPushButton(widget1);
        B5->setObjectName(QString::fromUtf8("B5"));
        B5->setMinimumSize(QSize(120, 120));
        B5->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B5, 3, 1, 1, 1);

        MUL = new QPushButton(widget1);
        MUL->setObjectName(QString::fromUtf8("MUL"));
        MUL->setMinimumSize(QSize(120, 120));
        MUL->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(MUL, 1, 2, 1, 1);

        B2 = new QPushButton(widget1);
        B2->setObjectName(QString::fromUtf8("B2"));
        B2->setMinimumSize(QSize(120, 120));
        B2->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B2, 4, 1, 1, 1);

        B0 = new QPushButton(widget1);
        B0->setObjectName(QString::fromUtf8("B0"));
        B0->setMinimumSize(QSize(120, 120));
        B0->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B0, 5, 1, 1, 1);

        MINUS = new QPushButton(widget1);
        MINUS->setObjectName(QString::fromUtf8("MINUS"));
        MINUS->setMinimumSize(QSize(120, 120));
        MINUS->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(MINUS, 1, 1, 1, 1);

        B9 = new QPushButton(widget1);
        B9->setObjectName(QString::fromUtf8("B9"));
        B9->setMinimumSize(QSize(120, 120));
        B9->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B9, 2, 2, 1, 1);

        EQ = new QPushButton(widget1);
        EQ->setObjectName(QString::fromUtf8("EQ"));
        EQ->setMinimumSize(QSize(120, 240));
        EQ->setMaximumSize(QSize(120, 240));

        gridLayout->addWidget(EQ, 4, 3, 2, 1);

        DIV = new QPushButton(widget1);
        DIV->setObjectName(QString::fromUtf8("DIV"));
        DIV->setMinimumSize(QSize(120, 120));
        DIV->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(DIV, 1, 3, 1, 1);

        B8 = new QPushButton(widget1);
        B8->setObjectName(QString::fromUtf8("B8"));
        B8->setMinimumSize(QSize(120, 120));
        B8->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B8, 2, 1, 1, 1);

        LBR = new QPushButton(widget1);
        LBR->setObjectName(QString::fromUtf8("LBR"));
        LBR->setMinimumSize(QSize(120, 120));
        LBR->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(LBR, 5, 0, 1, 1);

        B1 = new QPushButton(widget1);
        B1->setObjectName(QString::fromUtf8("B1"));
        B1->setMinimumSize(QSize(120, 120));
        B1->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B1, 4, 0, 1, 1);

        B4 = new QPushButton(widget1);
        B4->setObjectName(QString::fromUtf8("B4"));
        B4->setMinimumSize(QSize(120, 120));
        B4->setMaximumSize(QSize(120, 120));

        gridLayout->addWidget(B4, 3, 0, 1, 1);

        CLR = new QPushButton(widget1);
        CLR->setObjectName(QString::fromUtf8("CLR"));
        CLR->setMinimumSize(QSize(240, 120));
        CLR->setMaximumSize(QSize(240, 120));

        gridLayout->addWidget(CLR, 0, 0, 1, 2);

        BACK = new QPushButton(widget1);
        BACK->setObjectName(QString::fromUtf8("BACK"));
        BACK->setMinimumSize(QSize(240, 120));
        BACK->setMaximumSize(QSize(240, 120));

        gridLayout->addWidget(BACK, 0, 2, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\267\262\345\255\230\345\202\250\347\232\204\347\237\251\351\230\265\357\274\232", nullptr));
        addMatrix->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\347\237\251\351\230\265", nullptr));
        TRANS->setText(QCoreApplication::translate("Widget", "^T", nullptr));
        B3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        RBR->setText(QCoreApplication::translate("Widget", ")", nullptr));
        B7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        POW->setText(QCoreApplication::translate("Widget", "^", nullptr));
        ADD->setText(QCoreApplication::translate("Widget", "+", nullptr));
        B6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        B5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        MUL->setText(QCoreApplication::translate("Widget", "*", nullptr));
        B2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        B0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        MINUS->setText(QCoreApplication::translate("Widget", "-", nullptr));
        B9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        EQ->setText(QCoreApplication::translate("Widget", "=", nullptr));
        DIV->setText(QCoreApplication::translate("Widget", "/", nullptr));
        B8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        LBR->setText(QCoreApplication::translate("Widget", "(", nullptr));
        B1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        B4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        CLR->setText(QCoreApplication::translate("Widget", "C", nullptr));
        BACK->setText(QCoreApplication::translate("Widget", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
