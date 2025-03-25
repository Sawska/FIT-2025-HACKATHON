#include "exercise3_easy.h"
#include <iostream>
#include <chrono>

void test() {
    try {
        auto start = std::chrono::high_resolution_clock::now();
        std::cout << (countVowels("HELLO WORLD") == 3 ? "Pass" : "Fail") << std::endl;
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 1 executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms" << std::endl;

        start = std::chrono::high_resolution_clock::now();
        std::cout << (countVowels("JAVA SCRIPT") == 3 ? "Pass" : "Fail") << std::endl;
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 2 executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms" << std::endl;

        start = std::chrono::high_resolution_clock::now();
        std::cout << (countVowels("AEIOU") == 5 ? "Pass" : "Fail") << std::endl;
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 3 executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms" << std::endl;

        start = std::chrono::high_resolution_clock::now();
        std::cout << (countVowels("BCDFG HJKLMNPQRSTVWXYZ") == 0 ? "Pass" : "Fail") << std::endl;
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 4 executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms" << std::endl;

        start = std::chrono::high_resolution_clock::now();
        std::cout << (countVowels("I LOVE PROGRAMMING") == 6 ? "Pass" : "Fail") << std::endl;
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 5 executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms" << std::endl;

        try {
            start = std::chrono::high_resolution_clock::now();
            countVowels("Hello World"); // Invalid (lowercase letters)
            std::cout << "Fail" << std::endl;
        } catch (const std::invalid_argument&) {
            std::cout << "Pass" << std::endl;
        }
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 6 executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms" << std::endl;

        try {
            start = std::chrono::high_resolution_clock::now();
            countVowels(std::string(101, 'A')); // Invalid (too long)
            std::cout << "Fail" << std::endl;
        } catch (const std::invalid_argument&) {
            std::cout << "Pass" << std::endl;
        }
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 7 executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
    }
}

int main() {
    test();
    return 0;
}
