#include "app.h"
#include <format>
#include <iostream>
#include <sstream>
#include <iomanip>

namespace vsite::oop::v1
{
    std::string to_hex(int a)
    {
        // return std::format("{:X}",a);
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
    void mult_table(int a,std::ostream& ss){
        if(a<1||a>20)return;
         
        
        for(int i=0;i<=a;++i){
          if(i!=a)ss<<i<<std::setw(4);
          else ss<<i;
          
        }
        ss<<"\n";
        for(int i=1;i<=a;++i){
          
          
          ss<<i<<std::setw(4);
         for(int j=1;j<=a;++j){
           if(j!=a)ss<<i*j<<std::setw(4);
           else ss<<i*j;
           ss<<"\n";
          }
          
     }
          
        






    }
/*
* function implementations
*/

} // namespace

