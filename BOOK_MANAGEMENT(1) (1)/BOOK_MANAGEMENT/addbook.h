#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>
#include "viewbook.h"
#include <QListWidget>
#include"issuebook.h"
#include "returnbook.h"
#include<QMap>
#include <QMenuBar>
#include <QMenuBar>
#include <QVector>
#include <stdarg.h>
#include "database/db.h"
#include "adduser.h"

class Db;
class ReturnBook;
class IssueBook;
namespace Ui {
class AddBook;
}

class AddBook : public QDialog
{
    Q_OBJECT

public:
    explicit AddBook(QWidget *parent = nullptr);
    ~AddBook();

    QMap<QString,int> bq; // book_quantity map

    QMap<QString,int>mm; // issue
    QMap<QString,int>mmm; //return

    IssueBook* obj; //issue
    ReturnBook* obj1; //return

    void show1(QSet<QString>);//for stu_name

//    void display11(QMap<QString,int>);



signals:
    void SendData(QMap<QString,int>); //issue
    void SendData1(QMap<QString,int>); //return

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AddBook *ui;
    Db *d;
};

#endif // ADDBOOK_H
