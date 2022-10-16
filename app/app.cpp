#include "app.h"
#include <format>

namespace vsite::oop::v1
{
    std::string to_hex(int a){
        std::stringstream ss;
        ss<<hex<<a;
        std::string res=ss.str();
        return res;
    }
    std::string to_exp(double a){
          
        std::stringstream ss;
        ss<<std::setprecision(2)<<scientific<<a;
        std::string res=ss.str();
        return res;

    }
    void mult_table(int a,std::ostream&){



    }
/*
* function implementations
*/

} // namespace

