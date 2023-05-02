#ifndef ISSUEBOOK_H
#define ISSUEBOOK_H

#include <QDialog>
#include "viewbook.h"
#include "addbook.h"
#include "database/db.h"
#include <QSet>
#include <QMap>

class Db;
class ViewBook;
class AddBook;
namespace Ui {
class IssueBook;
}

class IssueBook : public QDialog
{
    Q_OBJECT

public:
    explicit IssueBook(AddBook* pt,ViewBook* pt2, QWidget *parent = nullptr);
    ~IssueBook();
    void input_of_student(QSet<QString>);
    void display_combo1();
    void input_of_bookname(QMap<QString,int>);
    void display_combo2();
    void pass(QMap<QString,int>);

    AddBook *oab;
    ViewBook *ovb;
    QMap<QString, int> qq; // issue

signals:
    void data(QMap<QString,int>);
    void send(QMap<QString,int>);

private slots:
    void on_pushButton_clicked();

private:
    Ui::IssueBook *ui;
    QSet<QString> s;
};

#endif // ISSUEBOOK_H
