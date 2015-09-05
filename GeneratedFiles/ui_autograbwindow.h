/********************************************************************************
** Form generated from reading UI file 'autograbwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOGRABWINDOW_H
#define UI_AUTOGRABWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_autoGrabWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *autoGrabWindowClass)
    {
        if (autoGrabWindowClass->objectName().isEmpty())
            autoGrabWindowClass->setObjectName(QStringLiteral("autoGrabWindowClass"));
        autoGrabWindowClass->resize(322, 97);
        centralWidget = new QWidget(autoGrabWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        autoGrabWindowClass->setCentralWidget(centralWidget);

        retranslateUi(autoGrabWindowClass);

        QMetaObject::connectSlotsByName(autoGrabWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *autoGrabWindowClass)
    {
        autoGrabWindowClass->setWindowTitle(QApplication::translate("autoGrabWindowClass", "autoGrabWindow", 0));
        label->setText(QApplication::translate("autoGrabWindowClass", "\351\227\264\351\232\224\346\227\266\351\227\264", 0));
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QString());
        pushButton->setText(QApplication::translate("autoGrabWindowClass", "begin", 0));
        pushButton_2->setText(QApplication::translate("autoGrabWindowClass", "end", 0));
        pushButton_3->setText(QApplication::translate("autoGrabWindowClass", "close", 0));
    } // retranslateUi

};

namespace Ui {
    class autoGrabWindowClass: public Ui_autoGrabWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOGRABWINDOW_H
