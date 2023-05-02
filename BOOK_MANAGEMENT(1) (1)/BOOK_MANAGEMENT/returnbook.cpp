#include "returnbook.h"
#include "ui_returnbook.h"
#include "adduser.h"
#include "addbook.h"
#include "viewuser.h"
#include "viewbook.h"
#include <QSet>
#include <QString>
#include <QDebug>

QMap<QString,int>m1;
ReturnBook::ReturnBook(AddBook *ptt,ViewBook *ptt2,QWidget *parent) :
    QDialog(parent),
     oabb(ptt),ovbb(ptt2),
    ui(new Ui::ReturnBook)
{
    ui->setupUi(this);
}

ReturnBook::~ReturnBook()
{
    delete ui;
}

void ReturnBook::input_of_studentname2(QSet<QString>aa)
{
    for(auto xx1:aa)
    {
        s1.insert(xx1);
    }
}

void ReturnBook::display_combo11() //studentname
{
    ui->comboBox_2->addItem("select");
    for(auto xx1:s1)
    {
        ui->comboBox_2->addItem(xx1);
    }
}

void ReturnBook::input_of_bookname2(QMap<QString, int>data2)
{
    qqq=data2;
}

void ReturnBook::display_combo12()//bookname
{

    ui->comboBox->addItem("select");
    for(auto it=qqq.begin();it!=qqq.end();it++)
    {
        qDebug()<<it.key()<<"--"<<it.value();
        ui->comboBox->addItem(it.key());
    }
}

void ReturnBook::pass1(QMap<QString, int>mmm)
{
     m1=mmm;
}

void ReturnBook::on_pushButton_clicked()
{
    QString bb1=ui->comboBox->currentText();
    for(auto it=m1.begin();it!=m1.end();it++)
    {
       qDebug()<<it.key()<<":"<<it.value();
                if(bb1==it.key())
        {
            ++it.value();
        }
    }
   ovbb->ReceiveData1(m1);
}

