#ifndef EXERCISE3_HARD_H
#define EXERCISE3_HARD_H

#include <string>

std::string polybius_encrypt(const std::string &text);
std::string polybius_decrypt(const std::string &code);
void initialize_lookup_maps();

#endif // EXERCISE3_HARD_H
