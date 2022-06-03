#include "form_statistic_teacher.h"
#include "ui_form_statistic_teacher.h"
#include "back_func.h"

Form_statistic_teacher::Form_statistic_teacher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_statistic_teacher)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Hello"));
    ui->lineEdit->setFocus(Qt::TabFocusReason);
    ui->tableWidget->setVisible(false);
}

Form_statistic_teacher::~Form_statistic_teacher()
{
    delete ui;
}

void Form_statistic_teacher::on_pushButton_clicked()
{
    QString group_num = ui->lineEdit->text();
    check_access(group_num);
}

