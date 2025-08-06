#include "trinary.h"

namespace trinary {

// TODO: add your solution here
    double power(double base, int exponent) {
        double result = 1.0;
        if (exponent > 0) {
            for (int i = 0; i < exponent; ++i) {
                result *= base;
            }
        }else if (exponent < 0){
            for (int i = 0; i < -exponent; ++i) {
                result /= base;
            }
        }
        return result;
    }
    int to_decimal(std::string input){
        int sum{};
        int length=input.length()-1;
        for(char ch:input){
            if(isdigit(ch)){
                sum+=static_cast<int>(ch-'0')*power(3,length);
                length--;
            }else{
                sum=0;
                break;
            }
        }
        return sum;
    }
}  // namespace trinary
