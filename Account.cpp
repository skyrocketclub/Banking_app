#include "Account.hpp"
using namespace std;

Account::Account(string name, string password,double balance)
:name{name}, password{password}, balance {balance}
{
}

void Account::print (std::ostream &COUT){
     COUT<<"Main Account: "<<name<<endl;
}

//std::ostream & operator <<(std::ostream & COUT, Account &account){
//    COUT<<"Main Account: "<<account.name<<endl;
//    return COUT;
//}
 void Account::withdraw (double amount){
     if ( balance - amount >= 0){
     balance-=amount;
     cout<<"transaction successful"<<std::endl;
     }
     else{
         std::cout<<"Insufficient Funds! "<<endl;
     }
 }
 
    void Account::deposit (double amount) {
        balance+=amount;
        cout<<"Transaction Successful"<<endl;
    }
    
    void Account::check_balance(){
        cout<< "Account: "<<name<<"\tBalance: "<<balance<<endl;
    }

    string Account::getname(){
        return name;
    }
    
    string Account::getpassword(){
        return password;
    }
    
    double Account::getbalance(){
        return balance;
    }


Account::~Account()
{
}

