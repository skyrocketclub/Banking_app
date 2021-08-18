#ifndef BANKING_HPP
#define BANKING_HPP
#include "Account.hpp"
#include "Current.hpp"
#include <vector>
#include <iostream>

using namespace std;


    void display_menu(vector <Current> &account_list);
    void open_acc(vector <Current> &account_list);
    void access_acc(vector <Current> &account_list);
    
    void password_menu(vector <Current> &account_list,Current &acc);
    void account_menu(vector <Current> &account_list,Current &acc);
    void deposit(vector <Current> &account_list,Current &acc);
    void withdraw (vector <Current> &account_list,Current &acc);
    void check_bal (vector <Current> &account_list,Current &acc);
    void another_transaction(vector <Current> &account_list, Current &acc);
    bool quit(char &, bool &);
   
   
   /*
   
   class Banking
{
public:
};

 Banking();
    ~Banking();


*/




#endif // BANKING_HPP
