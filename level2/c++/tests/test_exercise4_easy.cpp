#include <iostream>
#include <cassert>
#include <chrono>
#include "exercise4_easy.h"

void test_triangle_perimeter() {
    std::vector<std::vector<int>> test_cases[] = {
        {{3, 4, 5}, {5, 12, 13}, {8, 15, 17}},
        {{6, 8, 10}, {9, 12, 15}, {12, 16, 20}},
        {{7, 24, 25}, {10, 24, 26}, {15, 20, 25}}
    };
    int expected_results[] = {40, 48, 60};
    
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    auto start = std::chrono::high_resolution_clock::now();
    
    std::cout << "=============================================" << std::endl;
    std::cout << "Testing Triangle Perimeter Calculation..." << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < num_tests; ++i) {
        std::cout << "Test case " << (i + 1) << ":" << std::endl;

        std::cout << "Input triangle sides: ";
        for (const auto& triangle : test_cases[i]) {
            for (int side : triangle) {
                std::cout << side << " ";
            }
        }
        std::cout << std::endl;

        int result = triangle_perimeter(test_cases[i]);

        int expected = expected_results[i];
        std::cout << "Expected perimeter: " << expected << std::endl;
        std::cout << "Calculated perimeter: " << result << std::endl;

        if (result == expected) {
            std::cout << "Test Passed!" << std::endl;
        } else {
            std::cout << "Test Failed! (Expected: " << expected << ", Got: " << result << ")" << std::endl;
        }
        std::cout << "---------------------------------------------" << std::endl;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "All tests completed!" << std::endl;
    std::cout << "Total execution time: " << elapsed.count() << " seconds" << std::endl;
    std::cout << "=============================================" << std::endl;
}

int main() {
    test_triangle_perimeter();
    return 0;
}
