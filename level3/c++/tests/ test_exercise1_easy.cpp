#include <iostream>
#include <chrono>
#include "exercise1_easy.h"

void runTest(int n, const std::string& expected, int testNumber) {
    auto start = std::chrono::high_resolution_clock::now();
    std::string result = checkPasswordStrength(n);
    auto end = std::chrono::high_resolution_clock::now();

    if (result == expected) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Test " << testNumber << " executed in " << duration.count() << " ms" << std::endl;
}

void test() {
    runTest(1111, "This password is weak", 1);
    runTest(1234, "This password is weak", 2);
    runTest(5678, "This password is weak", 3);
    runTest(9876, "This password is strong", 4);
    runTest(1357, "This password is strong", 5);
    runTest(2468, "This password is strong", 6);
    runTest(9999, "This password is weak", 7);
    runTest(1001, "This password is strong", 8);
}

int main() {
    test();
    return 0;
}
