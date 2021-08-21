#ifndef BANKING_HPP
#define BANKING_HPP
#include "Account.hpp"
#include "Current.hpp"
#include "Savings.hpp"
#include "Kids.hpp"
#include <vector>
#include <iostream>
#include <memory>

using namespace std;

//I am making use of base pointers in this project to make polymorphism possible...
    void display_menu(vector<shared_ptr<Account>> &account_list);
    void open_acc(vector<shared_ptr<Account>> &account_list);
    void access_acc(vector<shared_ptr<Account>>&account_list);
    
    void password_menu(vector<shared_ptr<Account>> &account_list,shared_ptr<Account> acc);
    void account_menu(vector<shared_ptr<Account>> &account_list,shared_ptr<Account> acc);
    void deposit(vector<shared_ptr<Account>> &account_list, shared_ptr<Account> acc);
    void withdraw (vector<shared_ptr<Account>>&account_list,shared_ptr<Account> acc);
    void check_bal (vector<shared_ptr<Account>>&account_list,shared_ptr<Account> acc);
    void another_transaction(vector<shared_ptr<Account>>&account_list, shared_ptr<Account> acc);
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
