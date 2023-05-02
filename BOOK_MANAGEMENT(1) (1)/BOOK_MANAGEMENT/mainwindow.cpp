#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "adduser.h"
#include "addbook.h"
#include "viewuser.h"
#include "viewbook.h"
#include "issuebook.h"
#include "returnbook.h"
#include <QDebug>
#include<QMap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked() //addbook
{
    ab->show();
}


void MainWindow::on_pushButton_2_clicked() //adduser
{
    au->show();
}


void MainWindow::on_pushButton_4_clicked() //viewbook
{
    vb->ReceiveData(ab->bq); // issue
    connect(this,SIGNAL(SendData(QMap<QString,int> ab->bq)),vb,SLOT(ReceiveData(QMap<QString,int>ab->qq)));
    emit ab->SendData(ab->bq);


    vb->ReceiveData1(ab->bq); // return
    connect(this,SIGNAL(SendData1(QMap<QString,int> ab->bq)),vb,SLOT(ReceiveData1(QMap<QString,int>ab->qqq)));
    emit ab->SendData1(ab->bq);

    vb->show();
}


void MainWindow::on_pushButton_3_clicked() //viewuser
{
    vu->print(au->aa);
    vu->show();
}


void MainWindow::on_pushButton_6_clicked() //issuebook
{
    ib->input_of_student( au->aa);
    ib->display_combo1();

    ib->input_of_bookname(ab->bq);
    ib->display_combo2();

    ib->show();
}


void MainWindow::on_pushButton_5_clicked() //returnbook
{
    rb->input_of_studentname2(au->aa);
    rb->display_combo11();

    rb->input_of_bookname2(ab->bq);
    rb->display_combo12();

    rb->show();
}

