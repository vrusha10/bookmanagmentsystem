#include "viewuser.h"
#include "ui_viewuser.h"
#include <QSet>
#include "adduser.h"
#include "viewbook.h"
#include <QDebug>
#include <QString>
#include"viewbook.h"

ViewUser::ViewUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewUser)
{
    ui->setupUi(this);
}

ViewUser::~ViewUser()
{
    delete ui;
}

void ViewUser::print(QSet<QString>se)
{
    QListWidgetItem *ql= ui->listWidget->currentItem();
    ql=new QListWidgetItem();

    QString str2="student_name";
    ui->listWidget->addItem(str2);

    for(auto p:se)
    {
        ql->setText(p);
        ui->listWidget->addItem(p);
        qDebug() <<p<<" ";
    }
}
