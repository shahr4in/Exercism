#include "atbash_cipher.h"

namespace atbash_cipher {

// TODO: add your solution here
    std::string encode(const std::string& plain){
        std::string raw;
        for (char c : plain) {
            if (std::isalpha(c)) {
                char lower = std::tolower(c);
                raw += 'z' - (lower - 'a');
            } else if (std::isdigit(c)) {
                raw += c;
            }
        }
        std::string result;
        for (size_t i = 0; i < raw.size(); ++i) {
            if (i > 0 && i % 5 == 0) {
                result += ' ';
            }
            result += raw[i];
        }
        return result;
    }
    
    std::string decode(const std::string& cipher) {
        std::string raw;
        for (char c : cipher) {
            if (std::isalpha(c)) {
                char lower = std::tolower(c);
                raw += 'z' - (lower - 'a');
            } else if (std::isdigit(c)) {
                raw += c;
            }
        }
        return raw;
    }
}  // namespace atbash_cipher
