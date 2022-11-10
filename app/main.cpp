#include "app.h"
#include <iostream>
#include <sstream>

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
    int n;
    std::cout<<"Enter integer number: ";
    std::cin>>n;
    
    std::cout<<vsite::oop::v1::to_hex(n);
    vsite::oop::v1::mult_table(n,std::cout);
    return 0;
    
}
