#include "adduser.h"
#include "ui_adduser.h"
#include "addbook.h"
#include "viewuser.h"
#include <QDebug>
#include <QSet>
#include <QString>
#include "database/db.h"

AddUser::AddUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUser)
{
    ui->setupUi(this);
}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::on_pushButton_clicked()
{
    QString string=ui->lineEdit->text();
    aa.insert(string);
    aaa->show1(aa);
}

