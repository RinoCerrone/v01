#include "app.h"
#include <format>
#include <iostream>
#include <sstream>
#include <iomanip>

namespace vsite::oop::v1
{
    std::string to_hex(int a){
        //return std::format("{:X}",a);
        std::stringstream ss;
        ss<<std::hex<<std::uppercase<<a;
        std::string res=ss.str();
        return res;
    }
    std::string to_exp(double a){
        //return std::format("{:.2e}",a);
        std::stringstream ss;
        ss<<std::setprecision(2)<<std::scientific<<a;
        std::string res=ss.str();
        return res;

    }
    void mult_table(int a,std::ostream&){



    }
/*
* function implementations
*/

} // namespace

