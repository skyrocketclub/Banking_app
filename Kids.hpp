#ifndef KIDS_HPP
#define KIDS_HPP
#include "Account.hpp"
#include <vector>
#include <string>
#include <iostream>

class Kids : public Account
{
   
protected:
    std::string g_name {};      //The name of the guardian
public:

    friend ostream & operator << (ostream & COUT, Kids & account);
    void withdraw (double amount) override;
    void deposit (double amount) override;
   void check_balance() override;
    Kids(std::string name= "Unnamed Kids Account", std::string password = "0000",  double balance = 0.0, std::string g_name = "Guardian");
    ~Kids();

};

#endif // KIDS_HPP
