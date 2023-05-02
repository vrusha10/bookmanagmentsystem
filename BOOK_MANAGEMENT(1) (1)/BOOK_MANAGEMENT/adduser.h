#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <QSet>
#include "viewuser.h"
#include <QListWidget>
#include "database/db.h"
#include "addbook.h"
class Db;
class AddBook;
namespace Ui {
class AddUser;
}

class AddUser : public QDialog
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = nullptr);
    ~AddUser();

     QSet<QString>aa; //student_name set
     AddBook *aaa;
private slots:
     void on_pushButton_clicked();

private:
    Ui::AddUser *ui;
    Db *ptr;
};

#endif // ADDUSER_H
