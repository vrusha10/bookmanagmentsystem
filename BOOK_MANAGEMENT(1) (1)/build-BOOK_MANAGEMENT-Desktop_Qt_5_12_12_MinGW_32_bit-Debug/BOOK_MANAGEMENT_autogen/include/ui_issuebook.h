/********************************************************************************
** Form generated from reading UI file 'issuebook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEBOOK_H
#define UI_ISSUEBOOK_H

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

class Ui_IssueBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton;

    void setupUi(QDialog *IssueBook)
    {
        if (IssueBook->objectName().isEmpty())
            IssueBook->setObjectName(QString::fromUtf8("IssueBook"));
        IssueBook->resize(400, 300);
        widget = new QWidget(IssueBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 70, 221, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(IssueBook);

        QMetaObject::connectSlotsByName(IssueBook);
    } // setupUi

    void retranslateUi(QDialog *IssueBook)
    {
        IssueBook->setWindowTitle(QApplication::translate("IssueBook", "Dialog", nullptr));
        label->setText(QApplication::translate("IssueBook", "book name", nullptr));
        label_2->setText(QApplication::translate("IssueBook", "student name", nullptr));
        pushButton->setText(QApplication::translate("IssueBook", "issue book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IssueBook: public Ui_IssueBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEBOOK_H
