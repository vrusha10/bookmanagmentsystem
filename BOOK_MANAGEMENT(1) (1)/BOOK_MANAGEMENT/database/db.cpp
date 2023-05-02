#include <db.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QMap>
#include <QSet>

Db::Db(const QString &path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);
    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}


Db::Db()
{
 createTable();
}

Db::~Db()
{
    if (m_db.isOpen())
    {
        m_db.close();
    }
}

bool Db::isOpen() const
{
    return m_db.isOpen();
}

bool Db::createTable()
{
    bool success = false;
    QSqlQuery query;

    query.prepare("CREATE TABLE libInfo(studentname TEXT, bookname TEXT,quantity TEXT,issuebook TEXT);");//studentname TEXT
    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'libInfo': one might already exist.";
        success = false;
    }

    return success;

}


//bool Db::addstudent(const QString& studentname)
//{
//    bool success = false;

//    if (!studentname.isEmpty())
//    {
//        QSqlQuery queryAdd;
//        queryAdd.prepare("INSERT INTO libInfo (studentname) VALUES (:studentname)");
//        queryAdd.bindValue(":studentname",studentname);
//        if(queryAdd.exec())
//        {
//            success = true;
//        }
//        else
//        {
//            qDebug() << "add addstudent failed: " << queryAdd.lastError();
//        }
//    }
//    else
//    {
//        qDebug() << "add addstudent failed: name cannot be empty";
//    }

//    return success;
//}


bool Db::addbookname(const QString& studentname, QString& bookname,int quantity/*,int issuebook*/)//,int issuebook
{
    bool success = false;

    if (!bookname.isEmpty())
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO libInfo (studentname,bookname,quantity) VALUES (:studentname,:bookname,:quantity)");
        queryAdd.bindValue(":studentname",studentname);
        queryAdd.bindValue(":bookname",bookname);
        queryAdd.bindValue(":quantity",quantity);
//        queryAdd.bindValue(":issuebook",issuebook);

     if(queryAdd.exec())
     {
       success = true;
     }
     else
     {
       qDebug() << "add addbookname failed: " << queryAdd.lastError();
     }
    }
    else
    {
        qDebug() << "add addbookname failed: name cannot be empty";
    }
    return success;
}

