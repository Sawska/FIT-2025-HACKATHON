#include <iostream>
#include <chrono>
#include "exercise2_easy.h"

void runTest(int a, int b, int c, int expected, int testNumber) {
    auto start = std::chrono::high_resolution_clock::now();
    
    try {
        int result = getActualHeight(a, b, c);
        if (result == expected) {
            std::cout << "Test " << testNumber << " Pass";
        } else {
            std::cout << "Test " << testNumber << " Fail";
        }
    } catch (const std::invalid_argument&) {
        if (expected == -1) {
            std::cout << "Test " << testNumber << " Pass"; // Expected exception
        } else {
            std::cout << "Test " << testNumber << " Fail";
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    std::cout << " (Executed in " << elapsed.count() << " ms)" << std::endl;
}

int main() {
    runTest(180, 170, 175, 165, 1);
    runTest(190, 180, 185, 175, 2);
    runTest(200, 195, 198, 193, 3);
    runTest(175, 165, 170, 160, 4);
    runTest(160, 150, 155, 145, 5);
    runTest(201, 190, 195, -1, 6); // Should throw an exception

    return 0;
}
