#include "form_statistic_teacher.h"
#include "ui_form_statistic_teacher.h"
#include "back_func.h"
#include "not_allowed.h"


Form_statistic_teacher::Form_statistic_teacher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_statistic_teacher)
{
    not_all = new not_allowed;
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Hello"));
    ui->lineEdit->setFocus(Qt::TabFocusReason);
    ui->tableWidget->setVisible(false);
    ui->label_2->setVisible(false);
}

Form_statistic_teacher::~Form_statistic_teacher()
{
    delete ui;
}


void Form_statistic_teacher::show_statistic(){

}

void Form_statistic_teacher::no_access(){
    //qDebug() << "notnotont";
    not_all->show();
    ui->lineEdit->setText("");
}

void Form_statistic_teacher::on_pushButton_clicked()
{
    ui->label_2->setVisible(false);
    QString group_num = ui->lineEdit->text();
    if(group_num.length() == 7){
        check_access(group_num);
        connect(client::getInstance(),&client::allowed,this, &Form_statistic_teacher::show_statistic);
        connect(client::getInstance(),&client::not_allow,this, &Form_statistic_teacher::no_access);
    }
    else{
        ui->label_2->setVisible(true);
        ui->lineEdit->setText("");
    }

}

