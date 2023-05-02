#include "mainwindow.h"
#include "database/db.h"
#include <QApplication>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include <QtSql>

static const QString path="libInfo.db";
int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   Db obj(path);
    MainWindow w;
    if(obj.isOpen())
    {
        obj.createTable();
//        obj.addstudent("ab");
//        obj.addstudent("bc");
    w.show();
    }
    else
    {
        qDebug()<<"error";
    }

    return a.exec();
}

