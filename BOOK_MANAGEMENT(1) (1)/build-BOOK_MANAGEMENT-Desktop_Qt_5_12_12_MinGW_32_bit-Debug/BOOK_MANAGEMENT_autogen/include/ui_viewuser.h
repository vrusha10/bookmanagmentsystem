/********************************************************************************
** Form generated from reading UI file 'viewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSER_H
#define UI_VIEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewUser
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *ViewUser)
    {
        if (ViewUser->objectName().isEmpty())
            ViewUser->setObjectName(QString::fromUtf8("ViewUser"));
        ViewUser->resize(400, 300);
        listWidget = new QListWidget(ViewUser);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(25, 21, 351, 261));

        retranslateUi(ViewUser);

        QMetaObject::connectSlotsByName(ViewUser);
    } // setupUi

    void retranslateUi(QDialog *ViewUser)
    {
        ViewUser->setWindowTitle(QApplication::translate("ViewUser", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewUser: public Ui_ViewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSER_H
