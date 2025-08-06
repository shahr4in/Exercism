#include "raindrops.h"

namespace raindrops {
    std::string convert(int input){
        std::string output="";
        if(input%3==0)output+="Pling";
        if(input%5==0)output+="Plang";
        if(input%7==0)output+="Plong";
        if(output==""){
            return std::to_string(input);
        }else{
            return output;
        }
    }
    
}  // namespace raindrops
