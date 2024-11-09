#include <iostream>
#include <string>
#ifndef USER_H
#define USER_H


class User{
    protected:
    string Name;
    int ID;
    string Password;

    public:
    User(string);
    void login();
    void logout();

};
#endif