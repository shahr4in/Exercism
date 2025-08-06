#include "rotational_cipher.h"

namespace rotational_cipher {

// TODO: add your solution here
    std::string rotate(const std::string& input, int shift){
        std::string result;
        for (char c : input) {
            if (std::isalpha(c)) {
                char base = std::isupper(c) ? 'A' : 'a';
                char shifted = (c - base + shift) % 26 + base;
                result += shifted;
            }else{
                result += c;
            }
        }
        return result;
    }
}  // namespace rotational_cipher
