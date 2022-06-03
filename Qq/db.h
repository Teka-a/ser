#ifndef DB_H
#define DB_H

#include <QSqlDatabase>
#include <QDebug>

class db;

class db_destroyer{
private:
    db * p_instance;
public:
    ~db_destroyer();
    void initialize(db * p_instance);
};



class db
{
private:
    static db * p_instance;
    static db_destroyer destroyer;
    QSqlDatabase dbs;
protected:
    db();
    db(const db&);
    db & operator= (db&);
    ~db();
    friend class singleton_db_destroyer;
public:
    static db * getInstance();
    void close_db();
};

#endif // DB_H
