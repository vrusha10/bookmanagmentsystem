#include "viewbook.h"
#include "ui_viewbook.h"
#include "addbook.h"
#include <QVector>
#include <QDebug>
#include "issuebook.h"
#include "returnbook.h"
#include<QMap>

ViewBook::ViewBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewBook)
{
    ui->setupUi(this);
}

ViewBook::~ViewBook()
{
    delete ui;
}

void ViewBook::ReceiveData(QMap<QString, int>qq)
{
    Data = qq;
    QString str="Bookname\tQuantity";
    ui->listWidget->addItem(str);
    QMapIterator<QString,int>itr(Data);
    while(itr.hasNext())
    {
     itr.next();
     QString st=itr.key()+"\t"+QString::number(itr.value());
     ui->listWidget->addItem(st);
     qDebug() <<itr.key()<<" : "<<itr.value();
    }
}

void ViewBook::ReceiveData1(QMap<QString, int>qqq)
{
    Data1 = qqq;
//    QString strr="Bookname\tQuantity";
//    ui->listWidget->addItem(strr);
    QMapIterator<QString,int>itr1(Data1);
    while(itr1.hasNext())
    {
     itr1.next();
//     QString stt=itr1.key()+"\t"+QString::number(itr1.value());
//     ui->listWidget->addItem(stt);
     qDebug() <<itr1.key()<<" : "<<itr1.value();
    }
}
