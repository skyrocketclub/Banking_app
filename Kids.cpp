#include "Kids.hpp"

Kids::Kids(std::string name, std::string password, double balance, std::string g_name)
:Account(name,password,balance), g_name{g_name}
{
}

Kids::~Kids()
{
}

ostream & operator << (ostream & COUT, Kids & account){
    COUT<< "Account owner: "<<account.getname()<<"\tGuardian: "<<account.g_name<<std::endl;
    return COUT;
}
    void Kids::withdraw (double amount){
        Account::withdraw(amount);
    }
    void Kids::deposit (double amount) {
        Account::deposit(amount);
    }
   void Kids::check_balance() {
       Account::check_balance();
   }
