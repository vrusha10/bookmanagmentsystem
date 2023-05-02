/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReturnBook
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ReturnBook)
    {
        if (ReturnBook->objectName().isEmpty())
            ReturnBook->setObjectName(QString::fromUtf8("ReturnBook"));
        ReturnBook->resize(400, 300);
        layoutWidget = new QWidget(ReturnBook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 70, 221, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(ReturnBook);

        QMetaObject::connectSlotsByName(ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *ReturnBook)
    {
        ReturnBook->setWindowTitle(QApplication::translate("ReturnBook", "Dialog", nullptr));
        label->setText(QApplication::translate("ReturnBook", "book name", nullptr));
        label_2->setText(QApplication::translate("ReturnBook", "student name", nullptr));
        pushButton->setText(QApplication::translate("ReturnBook", "return book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnBook: public Ui_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
