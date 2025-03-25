#include <iostream>
#include <cassert>
#include <chrono>
#include "exercise4_easy.h"

void test() {
    try {
        auto start = std::chrono::high_resolution_clock::now();
        assert(print_pyramid('*', 3) == "9\n  *\n ***\n*****\n");
        auto end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 1: Pass (Executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms)\n";

        start = std::chrono::high_resolution_clock::now();
        assert(print_pyramid('#', 5) == "25\n    #\n   ###\n  #####\n #######\n#########\n");
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 2: Pass (Executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms)\n";

        start = std::chrono::high_resolution_clock::now();
        assert(print_pyramid('$', 1) == "1\n$\n");
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 3: Pass (Executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms)\n";

        start = std::chrono::high_resolution_clock::now();
        assert(print_pyramid('@', 4) == "16\n   @\n  @@@\n @@@@@\n@@@@@@@\n");
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 4: Pass (Executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms)\n";

        start = std::chrono::high_resolution_clock::now();
        assert(print_pyramid('X', 6) == "36\n     X\n    XXX\n   XXXXX\n  XXXXXXX\n XXXXXXXXX\nXXXXXXXXXXX\n");
        end = std::chrono::high_resolution_clock::now();
        std::cout << "Test 5: Pass (Executed in " 
                  << std::chrono::duration<double, std::milli>(end - start).count() 
                  << " ms)\n";

        try {
            start = std::chrono::high_resolution_clock::now();
            print_pyramid('&', 0); // Invalid height
            std::cout << "Test 6: Fail\n";
        } catch (const std::invalid_argument&) {
            end = std::chrono::high_resolution_clock::now();
            std::cout << "Test 6: Pass (Executed in " 
                      << std::chrono::duration<double, std::milli>(end - start).count() 
                      << " ms)\n";
        }

        try {
            start = std::chrono::high_resolution_clock::now();
            print_pyramid('O', 51); // Height too large
            std::cout << "Test 7: Fail\n";
        } catch (const std::invalid_argument&) {
            end = std::chrono::high_resolution_clock::now();
            std::cout << "Test 7: Pass (Executed in " 
                      << std::chrono::duration<double, std::milli>(end - start).count() 
                      << " ms)\n";
        }

    } catch (...) {
        std::cerr << "Test failed!\n";
    }
}

int main() {
    test();
    return 0;
}
