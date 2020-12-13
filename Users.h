#pragma once
#include <iostream>
#include <string>
using namespace std;

class Users
{
protected:
    string *_name;
    string *_login;
    string *_password;
public:
    Users(string *name, string *login, string *password);
    void ShowUser();
    void setName(string *name);
    void setLogin(string* login);
    void setPassword(string* password);
};


