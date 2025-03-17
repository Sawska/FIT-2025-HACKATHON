#include <iostream>
#include <chrono>
#include "exercise5_easy.h"

void test_rotate_number(int N, int expected_result) {
    auto start = std::chrono::high_resolution_clock::now();

    int result = rotate_number(N);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Original number: " << N << std::endl;
    std::cout << "Rotated number: " << result << std::endl;

    if (result == expected_result) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed. Expected: " << expected_result << std::endl;
    }

    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
    std::cout << "------------------------------" << std::endl;
}

int main() {
    int test_case_1 = 146;
    int expected_result_1 = 461;

    int test_case_2 = 239;
    int expected_result_2 = 392;

    int test_case_3 = 507;
    int expected_result_3 = 75;

    std::cout << "Test Case 1:" << std::endl;
    test_rotate_number(test_case_1, expected_result_1);

    std::cout << "Test Case 2:" << std::endl;
    test_rotate_number(test_case_2, expected_result_2);

    std::cout << "Test Case 3:" << std::endl;
    test_rotate_number(test_case_3, expected_result_3);

    return 0;
}
