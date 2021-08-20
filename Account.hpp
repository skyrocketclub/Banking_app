#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <string>
#include <iostream>
#include "Printable.hpp"

using namespace std;

class Account:public Printable
{
//    friend std::ostream & operator <<(std::ostream &COUT, Account &account);
protected:
    string name;
    double balance;
    string password;
    
public:
    string getname();
    string getpassword();
    double getbalance();
    
    //I will make this class an abstract class
    virtual void print(std::ostream &COUT) override;
    virtual void withdraw (double amount) = 0;
    virtual void deposit (double amount) = 0;
    virtual void check_balance() = 0;
    Account(string name = "   ", string password=" ",double balance = 0.0);
    virtual ~Account();

};

#endif // ACCOUNT_HPP
