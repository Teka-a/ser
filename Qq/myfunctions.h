#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>


class myfunctions
{
private:
    QSqlDatabase db;
public:
    myfunctions();
    ~myfunctions();
    /**
     * @brief Функция parsing считывает строку формата func&username&password&email&status,
     * затем вызывает функцию и передает параметры, указанные в строке
     * @param data_from_client, строка формата func&username&password&email
     * @return статус вызванной функции
     */
    QString parsing(QString data_from_client);
    /**
     * @brief Функция reg отвечает за регистрацию нового пользователя
     * @param login
     * @param password
     * @param email
     * @return статус регистрации (Вы не зарегистрированы/Данное имя пользователя уже зарегистрировано/Вы успешно зарегистрированы)
     */
    QString reg(QString login, QString password, QString email, QString status, QString name, QString surname);
    /**
     * @brief Функция auth отвечает за вход в аккаунт пользователя
     * @param login
     * @param password
     * @return статус входа (Неправильное имя пользователи или пароль/Добро пожаловать)
     */
    QString auth(QString login, QString password);

    QString updStat(QString name, QString task_num, QString status_of_task);
    QString get_stat (QString task_num);
    QString encrypt(QString toEncrypt);
    QString decrypt(QString toDecrypt);
    QString add_group(QString group_num, QString log_p1, QString log_p2, QString log_p3,
                      QString log_p4, QString log_p5, QString log_p6, QString log_p7,
                      QString log_p8, QString log_p9, QString teacher);
    QString get_login(QString name, QString surname);
};

#endif // MYFUNCTIONS_H
