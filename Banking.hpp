#ifndef BANKING_HPP
#define BANKING_HPP
#include "Account.hpp"
#include "Current.hpp"
#include "Savings.hpp"
#include "Kids.hpp"
#include <vector>
#include <iostream>

using namespace std;

//I am making use of base pointers in this project to make polymorphism possible...
    void display_menu(vector <Account *> &account_list);
    void open_acc(vector <Account *> &account_list);
    void access_acc(vector <Account *> &account_list);
    
    void password_menu(vector <Account *> &account_list,Account *acc);
    void account_menu(vector <Account *> &account_list,Account *acc);
    void deposit(vector <Account *> &account_list,Account *acc);
    void withdraw (vector <Account *> &account_list,Account *acc);
    void check_bal (vector <Account *> &account_list,Account *acc);
    void another_transaction(vector <Account *> &account_list, Account *acc);
    bool quit(char &, bool &);
    void account_details();
   
   
   /*
   
   class Banking
{
public:
};

 Banking();
    ~Banking();


*/




#endif // BANKING_HPP
