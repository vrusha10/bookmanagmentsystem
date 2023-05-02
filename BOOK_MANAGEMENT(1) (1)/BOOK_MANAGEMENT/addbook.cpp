#include "addbook.h"
#include "ui_addbook.h"
#include "viewbook.h"
#include "adduser.h"
#include "mainwindow.h"
#include "returnbook.h"
#include <QMap>
#include <QDebug>
#include "database/db.h"

QMap<QString,int> r;
QString zzz;
AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
    ui->comboBox->addItem("select");
    ui->comboBox->addItem("1");
    ui->comboBox->addItem("2");
    ui->comboBox->addItem("3");
    ui->comboBox->addItem("4");
    ui->comboBox->addItem("5");
}

AddBook::~AddBook()
{
    delete ui;
}

void AddBook::show1(QSet<QString> f)
{
    foreach(QString u,f)
    {
        zzz=u;
    }
    qDebug()<<"zzz";
}

void AddBook::on_pushButton_2_clicked()
{
    int i=ui->comboBox->currentIndex();
    QString n=ui->lineEdit->text();
    bq.insert(n,i);
    mm.insert(n,i); //issue
    obj->pass(mm);
    mmm.insert(n,i); //return
    obj1->pass1(mmm);
    d->addbookname(zzz,n,i);
    qDebug()<<"book n quantity is passed"<<d;

}

