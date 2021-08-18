#include <iostream>
#include "Account.hpp"
#include "Banking.hpp"
#include "Current.hpp"
#include <vector>

//try to organise  the display menu here...
//have thre vectors available for the thre types of banking accounts you have
//a switch case that toggles between 1. open an acc,  2. display account,  3. access an acc.... (password)... a. Deposit, b. withdraw
// all these will be achieved by just calling the respective functions


int main() {

    vector<Current> accounts;
    display_menu(accounts);

        
    return 0;
}

