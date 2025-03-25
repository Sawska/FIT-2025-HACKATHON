// Ви - криптограф, якому доручили завдання розробити систему перевірки надійності паролю 
// для входу в акаунт. Пароль складажться з чотирьох цифр,
//  і вважається ненадійним, якщо у ньому всі цифри однакові,
//  або якщо кожна наступна цифра більша за попередню рівно на один.
// ВВІД: Введіть одне ціле число n (1000≤n≤9999)
// ВИВІД: Якщо пароль ненадійний - виведіть "This password is weak", 
// якщо надійний - "This password is strong"

#include "exercise1_easy.h"
#include <stdexcept>
#include <string>


std::string checkPasswordStrength(int n) {

}

/*
ДЛЯ ПЕРЕВІРКИ: 
g++ -Wall -O2 -std=c++11 -I./exercises -I./tests ./tests/test_exercise1_easy.cpp ./exercises/exercise1_easy.cpp -o test_exercise1_easy && ./test_exercise1_easy
*/