#include "issuebook.h"
#include "ui_issuebook.h"
#include "addbook.h"
#include "adduser.h"
#include "viewbook.h"
#include<QMap>
#include<QDebug>

QMap<QString,int>m;
IssueBook::IssueBook(AddBook *pt,ViewBook *pt2,QWidget *parent) :
    QDialog(parent),
    oab(pt),ovb(pt2),
    ui(new Ui::IssueBook)
{
    ui->setupUi(this);
}

IssueBook::~IssueBook()
{
    delete ui;
}

void IssueBook::input_of_student(QSet<QString>aa)
{
    for(auto xx:aa)
    {
        s.insert(xx);
    }
}

void IssueBook::display_combo1() //studentname
{
    ui->comboBox_2->addItem("select");
    for(auto xx:s)
    {
        ui->comboBox_2->addItem(xx);
    }
}

void IssueBook::input_of_bookname(QMap<QString, int>data)
{
    qq = data;
}

void IssueBook::display_combo2() //bookname
{
    ui->comboBox->addItem("select");
    for(auto it=qq.begin();it!=qq.end();it++)
    {
        qDebug()<<it.key()<<"--"<<it.value();
        ui->comboBox->addItem(it.key());
    }

}

void IssueBook::pass(QMap<QString, int>mm)
{
     m=mm;
}

void IssueBook::on_pushButton_clicked()
{
    QString bb=ui->comboBox->currentText();
    for(auto it=m.begin();it!=m.end();it++)
    {
       //qDebug()<<it.key()<<"--"<<it.value();
                if(bb==it.key())
        {
            --it.value();
        }
    }
      ovb->ReceiveData(m);
}

