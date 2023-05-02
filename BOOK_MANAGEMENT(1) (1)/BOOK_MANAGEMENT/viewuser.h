#ifndef VIEWUSER_H
#define VIEWUSER_H

#include <QDialog>
#include <QSet>
#include "adduser.h"
namespace Ui {
class ViewUser;
}

class ViewUser : public QDialog
{
    Q_OBJECT

public:
    explicit ViewUser(QWidget *parent = nullptr);
    ~ViewUser();
    QSet<QString> se;
void print(QSet<QString>);

private:
    Ui::ViewUser *ui;
};

#endif // VIEWUSER_H
