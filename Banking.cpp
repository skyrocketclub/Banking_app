#include "Banking.hpp"


//1. Open a current . Kids and Savings account
//2. Display list of current, savings and kids account_list
//3. Access an account. ( it means display the list of accounts, then you select one. you enter the password
//   then you carry out the transaction you want

    char option {};
    bool quitted {false};

    void display_menu(vector<Current> &account_list){
    if(quitted == false){
        cout<<"1. Open a New Account\n2. Access an account\n3. Quit\nOption: ";
        cin>>option;
        system("CLS");
        
          if(option != '3'){
            switch (option){
                case '1':
                {
                    open_acc(account_list);
                }
                break;
                
                case '2':
                {
                    access_acc(account_list);
                }
                break;
            
                default:
                {
                    cout<<"Please enter a Valid option"<<endl;
                    display_menu(account_list);
                }
                
            }
        }
            else{
                quit(option, quitted);
            }
         }
}
    
void open_acc(vector <Current> &account_list){
    string name {};
    string password {};
    cout<<"First name of account holder: ";
    cin>>name;
    cout<<"Password: ";
    cin>>password;
    Current current (name,password);
    account_list.push_back(current);
    cout<<"Account successfully added!"<<endl;
    display_menu(account_list);
}

/*
 * When you Type the the number corresponding to an account,
 * you see, welcome so and so...
 * then you will be asked to input the 4 digit pin and you have three attempts to get it right...
 * if you do not get it right, you are thrown back to the display menu...
 * If you get it right 
 * You can then deposit, withdraw, or check the balance and even you can transfer some money from your account to another user of the same type  of account.
 * NAMASTE
 * */
void access_acc(vector <Current> &account_list){
    cout<<"Choose an account to access: "<<endl;
    size_t i {1};
    size_t a_option {};
    for(auto acc : account_list){
        cout<<i<<" . ";
        cout<<acc;
        i++;
    }
    cout<<"Account Number: ";
    cin>>a_option;
    password_menu(account_list,account_list.at(a_option-1));
    display_menu(account_list);
}



void password_menu(vector <Current> &account_list,Current &acc){
    string password {};
    int chance {0};
    system("CLS");
    cout<<"\t\t\t\t\tWelcome "<<acc.getname()<<endl;
    cout<<"Please enter your secret 4 digit pin         * * * * \n";
   
   while (chance < 3){
       cout<<"PIN: ";
        cin>>password;
        
        if (password == acc.getpassword()){
            chance = 5;
            account_menu(account_list,acc);
            
        }
        else{
       cout<<"Invalid password"<<endl;
       cout<<"You have "<<2-chance<<" more attempts";
        }
       chance++;
   }
   if (chance == 3){
   cout<<"Sorry you do not have any chances left\n"<<endl;
   }
   display_menu(account_list);
}


void account_menu(vector <Current> &account_list,Current &acc){
      system("CLS");
      char a_choice {};
      cout<<"What transaction would you like to carry out today? \n";
      cout<<"1. Check Balance\n2. Make Deposit\n3. WIthdraw\n";
      cout<<"Choice: ";
      cin>>a_choice;
      switch(a_choice){
          case '1':
          {
              check_bal(account_list, acc);
          }
          break;
          
          case '2':
          {
              deposit(account_list,acc);
          }
          break;
          
          case '3':
          {
              withdraw (account_list,acc);
          }
          break;
          default:
          {
              cout<<"Invalid option! "<<endl;
          }
      }
}

void check_bal (vector <Current> &account_list, Current &acc){
    acc.check_balance();
//    display_menu(account_list);
    another_transaction(account_list,acc);
}

void withdraw (vector <Current> &account_list, Current &acc){
    double amount {0.0};
    cout<<"How much would you like to withdraw?: "<<endl;
    cin>>amount;
    acc.withdraw(amount);
//    display_menu(account_list);
    another_transaction(account_list,acc);
}

void deposit (vector <Current> &account_list, Current &acc){
     double amount {0.0};
    cout<<"How much would you like to deposit?: "<<endl;
    cin>>amount;
    acc.deposit(amount);
//    display_menu(account_list);
    another_transaction(account_list,acc);
}

void another_transaction(vector <Current> &account_list, Current &acc){
    cout<<"Would you like to perform another transaction?\n1. Yes\n2. No";
    int option_a {0};
   redemption: cout<<"\nOption: ";
    cin>>option_a;
    if (option_a == 1){
        password_menu(account_list,acc);
    }
    else if (option_a == 2){
        display_menu(account_list);
    }
    else {
        cout<<"Please enter a valid option dumbass\n";
        goto redemption;
    }
}

  bool quit(char &option, bool &quitted){
//      bool status{ false};
        cout<<"Goodbye"<<endl;
        option = '3';
        quitted = true;
        return quitted;
    }