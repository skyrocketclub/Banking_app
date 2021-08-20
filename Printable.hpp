#ifndef PRINTABLE_HPP
#define PRINTABLE_HPP
#include <iostream>

class Printable
{
public:
        friend std::ostream & operator <<( std::ostream &COUT, Printable &account);

        virtual void print (std::ostream &COUT) = 0;
 
};

#endif // PRINTABLE_HPP
