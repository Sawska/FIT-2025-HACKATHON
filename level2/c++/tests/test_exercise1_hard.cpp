#include <iostream>
#include <chrono>
#include "exercise1_hard.h"

using namespace std;

void runTest(int n, long long expectedResult) {
    cout << "=============================================" << endl;
    cout << "Testing for n = " << n << "..." << endl;
    cout << "---------------------------------------------" << endl;
    
    auto start = chrono::high_resolution_clock::now();
    long long ways = countWays(n);
    auto end = chrono::high_resolution_clock::now();

    cout << "Ways to reach floor " << n << ": " << ways << endl;
    
    if (ways == expectedResult) {
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed. Expected: " << expectedResult << ", Got: " << ways << endl;
    }

    cout << "Execution time: " << chrono::duration<double>(end - start).count() << " seconds" << endl;
    cout << "=============================================" << endl << endl;
}

int main() {
    cout << "=========================" << endl;
    cout << "Testing Exercise 1: Climbing Stairs" << endl;
    cout << "=========================" << endl << endl;

    long long expectedResult1 = 89;         
    long long expectedResult2 = 121393;     
    long long expectedResult3 = 165580141;

    runTest(10, expectedResult1);
    runTest(25, expectedResult2);
    runTest(40, expectedResult3);

    return 0;
}
