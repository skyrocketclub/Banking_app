#include "Savings.hpp"

Savings::Savings(std::string name, std::string password, double balance)
:Account(name, password, balance)
{
}

Savings::~Savings()
{
}

 void Savings::withdraw (double amount){
     if (amount > 100000){
         cout<<"Error 101"<<endl;
         cout<<"You can not withdraw more N 100,000 for a Savings account"<<endl;
     }
     else{
         amount += 50;          // N 50 withdrawal fee for every withdrawal...
         Account::withdraw(amount);
     }
 }
 
    void Savings::deposit (double amount){
        amount += amount*0.05;      //5% Bonus for every deposit
        Account::deposit(amount);
    }
    
   void Savings::check_balance(){
    Account::check_balance();   
   }

//ostream & operator<< (ostream &COUT, Savings & account){
//    COUT<<"Account owner: "<<account.getname()<<endl;
//    return COUT;
//}

void Savings::print (std::ostream &COUT){
    COUT<<"Savings Account owner: "<<getname()<<endl;
}