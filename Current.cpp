#include "Current.hpp"
#include "Account.hpp"

Current::Current(string name, string password, double balance)
:Account(name,password,balance)
{
}

Current::~Current()
{
}

void Current::withdraw (double amount){
    Account::withdraw(amount);
}

void Current::deposit (double amount){
        if(amount > 0.5*balance){
            amount+= (0.05*amount);
        }
        Account::deposit(amount);
    }
    
void Current::check_balance(){
    Account::check_balance();
}

//ostream &operator <<(ostream & COUT, Current & account){
//    COUT<<"Current Account Owner: "<<account.name<<endl;
//    return COUT;
//}

void Current::print(std::ostream &COUT) {
        COUT<<"Current Account Owner: "<<name<<endl;
 }