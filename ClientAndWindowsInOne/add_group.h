#ifndef ADD_GROUP_H
#define ADD_GROUP_H
#include "back_func.h"
#include <QWidget>

namespace Ui {
class add_group;
}

class add_group : public QWidget
{
    Q_OBJECT

public:
    explicit add_group(QWidget *parent = nullptr);
    ~add_group();

private slots:
    void on_pushButton_clicked();

private:
    Ui::add_group *ui;
};

#endif // ADD_GROUP_H
