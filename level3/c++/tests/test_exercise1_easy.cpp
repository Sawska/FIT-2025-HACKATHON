#include <iostream>
#include <chrono>
#include "exercise1_easy.h"


void test_count_nines(int M, int expected_result) {

    auto start = std::chrono::high_resolution_clock::now();

    int result = count_nines(M);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;


    std::cout << "Original number: " << M << std::endl;
    std::cout << "Number of 9's: " << result << std::endl;

    if (result == expected_result) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed. Expected: " << expected_result << std::endl;
    }

    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
    std::cout << "------------------------------" << std::endl;
}

int main() {
    int test_case_1 = 999;
    int expected_result_1 = 3;

    int test_case_2 = 529;
    int expected_result_2 = 1;

    int test_case_3 = 129;
    int expected_result_3 = 1;

    // Run each test case
    std::cout << "Test Case 1:" << std::endl;
    test_count_nines(test_case_1, expected_result_1);

    std::cout << "Test Case 2:" << std::endl;
    test_count_nines(test_case_2, expected_result_2);

    std::cout << "Test Case 3:" << std::endl;
    test_count_nines(test_case_3, expected_result_3);

    return 0;
}

