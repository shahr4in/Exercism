#include "armstrong_numbers.h"

namespace armstrong_numbers {

// TODO: add your solution here
    bool is_armstrong_number(int input){
        int sum{};
        int original=input;
        int length=std::log10(std::abs(input)) + 1;
        while(input!=0){
            sum+=std::pow(input%10,length);
            input/=10;
        }
        if(sum==original){
            return true;
        }
        return false;
    }
}  // namespace armstrong_numbers