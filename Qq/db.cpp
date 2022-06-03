#include "db.h"

db * db::p_instance=0;
db_destroyer db::destroyer;

db_destroyer::~db_destroyer(){
    qDebug() << "deleted";
    delete p_instance;
}

void db_destroyer::initialize(db * p){
    qDebug() << "initialize";
    p_instance = p;
}

db * db::getInstance(){
    qDebug() << "get instance";
    if(!p_instance){
        p_instance = new db();
        destroyer.initialize(p_instance);
    }
    return p_instance;
}

db::db()
{
    qDebug() << "constructor";
    dbs = QSqlDatabase::addDatabase("QSQLITE");
    dbs.setDatabaseName("/home/kali/prog/ser/db/USG.db");

    if (!dbs.open()){
        qDebug() << "nope";
    }
    else{
        qDebug() << "ok";
    }
}

void db::close_db(){
    if (dbs.open()){
        dbs.close();
        qDebug() << "closed";
    }
    else{
        qDebug() << "already closed";
    }
}

db::~db()
{

}

