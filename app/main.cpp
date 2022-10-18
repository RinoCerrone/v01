#include "app.h"
#include <iostream>
#include <sstream>

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
    int a=6;
    std::stringstream ss;
    std::cout<<vsite::oop::v1::to_hex(a);
    vsite::oop::v1::mult_table(a,ss);
    return 0;
    
}
