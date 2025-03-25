#include "exercise5_hard.h"
#include <iostream>
#include <iostream>
#include <chrono>

double test_performance(void (*func)(const std::string&, int), const std::string& text, int key) {
    auto start = std::chrono::high_resolution_clock::now();
    func(text, key);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    return duration.count() * 1000; // Convert to milliseconds
}


int main() {
    const std::string test1 = "HELLO";
    const std::string test2 = "WORLD";
    const std::string test3 = "ENCRYPTION TEST CASE";
    const int key = 3;

    // Test encryption performance
    std::cout << "Encryption Test 1:" << std::endl;
    double time1 = test_performance([](const std::string& text, int key) { encode(text, key); }, test1, key);
    std::cout << "Encryption time for \"" << test1 << "\": " << time1 << "ms" << std::endl;

    std::cout << "Encryption Test 2:" << std::endl;
    double time2 = test_performance([](const std::string& text, int key) { encode(text, key); }, test2, key);
    std::cout << "Encryption time for \"" << test2 << "\": " << time2 << "ms" << std::endl;

    std::cout << "Encryption Test 3:" << std::endl;
    double time3 = test_performance([](const std::string& text, int key) { encode(text, key); }, test3, key);
    std::cout << "Encryption time for \"" << test3 << "\": " << time3 << "ms" << std::endl;

    // Test decryption performance
    std::cout << "Decryption Test 1:" << std::endl;
    std::string encrypted1 = encode(test1, key);
    double time4 = test_performance([](const std::string& text, int key) { decode(text, key); }, encrypted1, key);
    std::cout << "Decryption time for \"" << test1 << "\": " << time4 << "ms" << std::endl;

    std::cout << "Decryption Test 2:" << std::endl;
    std::string encrypted2 = encode(test2, key);
    double time5 = test_performance([](const std::string& text, int key) { decode(text, key); }, encrypted2, key);
    std::cout << "Decryption time for \"" << test2 << "\": " << time5 << "ms" << std::endl;

    std::cout << "Decryption Test 3:" << std::endl;
    std::string encrypted3 = encode(test3, key);
    double time6 = test_performance([](const std::string& text, int key) { decode(text, key); }, encrypted3, key);
    std::cout << "Decryption time for \"" << test3 << "\": " << time6 << "ms" << std::endl;

    return 0;
}
