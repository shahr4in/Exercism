#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#include <cctype>
namespace atbash_cipher {

// TODO: add your solution here
    std::string encode(const std::string& plain);
    std::string decode(const std::string& plain);
}  // namespace atbash_cipher

#endif  // ATBASH_CIPHER_H