#pragma once

#include<iostream>
#include<QSqlDatabase>
#include<QString>
#include<QObject>
using namespace std;


class Db: public QObject
{
    Q_OBJECT

public:

    Db(const QString& path);
    Db();
    ~Db();
    bool isOpen() const;
    bool createTable();
    bool addbookname(const QString&,QString&,int);

private:
    QSqlDatabase m_db;
};


