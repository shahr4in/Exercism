#include "luhn.h"

namespace luhn {

// TODO: add your solution here
    bool valid(std::string input){
        int sum{};
        input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());
        if((input.length() >= 2) && (std::all_of(input.begin(), input.end(), ::isdigit))){
            bool shouldDouble = false;
            for(int i = input.length()-1;i>=0;--i){
                int digit = input[i] - '0';
                if (shouldDouble) {
                    digit *= 2;
                    if (digit > 9) digit -= 9;
                }
                sum+=digit;
                shouldDouble=!shouldDouble;
            }
            return(sum%10==0);
        }
        return false;
    }
}  // namespace luhn
