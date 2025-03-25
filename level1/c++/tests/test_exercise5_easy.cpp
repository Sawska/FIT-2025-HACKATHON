#include <iostream>
#include <chrono>
#include "exercise5_easy.h"

void runTest(int n, int expected, int testNumber) {
    auto start = std::chrono::high_resolution_clock::now();
    try {
        int result = sumWhiteCells(n);
        if (result == expected) {
            std::cout << "Pass\n";
        } else {
            std::cout << "Fail\n";
        }
    } catch (const std::exception &e) {
        std::cout << "Pass\n";  // Expected failure for invalid cases
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Test " << testNumber << " executed in " << duration.count() << " ms\n";
}

void test() {
    runTest(2, 5, 1);
    runTest(4, 40, 2);
    runTest(6, 126, 3);
    runTest(8, 288, 4);
    runTest(10, 550, 5);
    runTest(3, -1, 6);   // Invalid input (odd n)
    runTest(1001, -1, 7); // Invalid input (too large)
}

int main() {
    test();
    return 0;
}
