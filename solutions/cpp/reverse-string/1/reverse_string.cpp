#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string input){
        int left=0;
        int right=input.length()-1;
        while (left<right){
            std::swap(input[left],input[right]);
            ++left;
            --right;
        }
        return input;
    }

}  // namespace reverse_string
