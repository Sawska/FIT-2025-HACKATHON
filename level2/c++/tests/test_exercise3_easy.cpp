#include <iostream>
#include <cassert>
#include <chrono>
#include "exercise3_easy.h"

void test_next_even() {
    int test_cases[] = {0, 1, 2, 7, 10, -1, -4};
    int expected_results[] = {2, 2, 4, 8, 12, 0, -2};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    auto start = std::chrono::high_resolution_clock::now();
    

    std::cout << "=============================================" << std::endl;
    std::cout << "Testing for next even number..." << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < num_tests; ++i) {
        int test_input = test_cases[i];
        int expected = expected_results[i];
        
        int result = next_even(test_input);

        std::cout << "Test case " << (i + 1) << ": Input = " << test_input 
                  << ", Expected = " << expected 
                  << ", Got = " << result << " ... ";

        if (result == expected) {
            std::cout << "Test Passed!" << std::endl;
        } else {
            std::cout << "Test Failed! (Expected: " << expected << ", Got: " << result << ")" << std::endl;
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "All tests completed!" << std::endl;
    std::cout << "Total execution time: " << elapsed.count() << " seconds" << std::endl;
    std::cout << "=============================================" << std::endl;
}

int main() {
    test_next_even();
    return 0;
}
