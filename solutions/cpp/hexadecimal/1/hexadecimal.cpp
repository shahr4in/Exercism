#include "hexadecimal.h"

namespace hexadecimal {

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

    int convert(std::string input){
        int sum{};
        int length=input.length()-1;
        for(char ch:input){
            if(isdigit(ch)){
                sum+=static_cast<int>(ch-'0')*power(16,length);
                length--;
            }else if(ch=='a'||ch=='A'){
                sum+=10*power(16,length);
                length--;
            }else if(ch=='b'||ch=='B'){
                sum+=11*power(16,length);
                length--;
            }else if(ch=='c'||ch=='C'){
                sum+=12*power(16,length);
                length--;
            }else if(ch=='d'||ch=='D'){
                sum+=13*power(16,length);
                length--;
            }else if(ch=='e'||ch=='E'){
                sum+=14*power(16,length);
                length--;
            }else if(ch=='f'||ch=='F'){
                sum+=15*power(16,length);
                length--;
            }else{
                sum=0;
                break;
            }
        }
        return sum;
    }
}  // namespace hexadecimal
