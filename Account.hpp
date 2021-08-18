#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <string>
#include <iostream>

using namespace std;

class Account
{
protected:
    string name;
    double balance;
    string password;
    
public:
    string getname();
    string getpassword();
    double getbalance();
    
    //I will make this class an abstract class
    virtual void withdraw (double amount) = 0;
    virtual void deposit (double amount) = 0;
    virtual void check_balance() = 0;
    Account(string name = "   ", string password=" ",double balance = 0.0);
    ~Account();

};

#endif // ACCOUNT_HPP
