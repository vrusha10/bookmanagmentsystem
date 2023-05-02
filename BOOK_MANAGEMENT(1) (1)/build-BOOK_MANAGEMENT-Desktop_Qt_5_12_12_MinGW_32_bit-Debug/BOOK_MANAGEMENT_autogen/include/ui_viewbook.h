/********************************************************************************
** Form generated from reading UI file 'viewbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWBOOK_H
#define UI_VIEWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewBook
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *ViewBook)
    {
        if (ViewBook->objectName().isEmpty())
            ViewBook->setObjectName(QString::fromUtf8("ViewBook"));
        ViewBook->resize(400, 300);
        listWidget = new QListWidget(ViewBook);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(25, 21, 351, 261));

        retranslateUi(ViewBook);

        QMetaObject::connectSlotsByName(ViewBook);
    } // setupUi

    void retranslateUi(QDialog *ViewBook)
    {
        ViewBook->setWindowTitle(QApplication::translate("ViewBook", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewBook: public Ui_ViewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWBOOK_H
