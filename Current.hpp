#ifndef CURRENT_HPP
#define CURRENT_HPP
#include "Account.hpp"
#include <iostream>

using namespace std;

class Current :public Account
{
public:
//    friend ostream & operator<<(ostream & COUT, Current & account);
//        friend ostream & operator<<(ostream & COUT, Current *account);
        
    virtual void print(std::ostream &COUT) override;
    void withdraw (double amount) override;
    void deposit (double amount) override;
    void check_balance() override;
    Current(string name = "Unnamed Current Account", string password=" ",double balance = 0.0);
    ~Current();

};

#endif // CURRENT_HPP
