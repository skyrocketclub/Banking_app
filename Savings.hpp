#ifndef SAVINGS_HPP
#define SAVINGS_HPP
#include "Account.hpp"
#include <iostream>
#include <string>

class Savings : public Account
{
//    friend ostream & operator<< (ostream &COUT, Savings &account);
public:
    virtual void print(std::ostream &COUT) override;
   void withdraw (double amount) override;
    void deposit (double amount) override;
   void check_balance() override;
    Savings(std::string name = "Unnamed Savings Account", std::string password = "0000", double balance = 0.0 );
    ~Savings();

};

#endif // SAVINGS_HPP
