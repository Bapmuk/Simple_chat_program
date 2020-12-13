#include "Users.h"

Users::Users(string *name, string *login, string *password) : 
    _name(name), _login(login), _password(password){}

void Users::ShowUser()
{
    cout << "User's name: " << _name << "; nickname: " << _login << endl;
}
void Users::setName(string* name)
{
    _name = name;
}
void Users::setLogin(string* login)
{
    _login = login;
}
void Users::setPassword(string* password)
{
    _password = password;
}