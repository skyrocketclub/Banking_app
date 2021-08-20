#include "Printable.hpp"
#include <iostream>

std::ostream &operator <<(std::ostream & COUT, Printable &account){
    account.print(COUT);
    return COUT;
}
