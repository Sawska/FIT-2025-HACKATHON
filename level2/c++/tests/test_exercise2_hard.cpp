#include <iostream>
#include <chrono>
#include "exercise2_hard.h"

using namespace std;

void runTest(const vector<int>& students, const vector<int>& expectedResult) {
    cout << "=============================================" << endl;
    cout << "Testing for students: ";
    for (int student : students) {
        cout << student << " ";
    }
    cout << endl;
    cout << "---------------------------------------------" << endl;

    auto start = chrono::high_resolution_clock::now();
    vector<int> result = resolveStudents(students);
    auto end = chrono::high_resolution_clock::now();

    bool testPassed = (result == expectedResult);

    if (testPassed) {
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
        cout << "Expected: ";
        for (int student : expectedResult) {
            cout << student << " ";
        }
        cout << endl;
        cout << "Got: ";
        for (int student : result) {
            cout << student << " ";
        }
        cout << endl;
    }

    cout << "Execution time: " << chrono::duration<double>(end - start).count() << " seconds" << endl;
    cout << "=============================================" << endl << endl;
}

int main() {
    cout << "=============================" << endl;
    cout << "Testing Exercise 2: Students in Corridor" << endl;
    cout << "=============================" << endl << endl;

    vector<int> students1 = {5, 10, -5};
    vector<int> expectedResult1 = {5, 10};  
    runTest(students1, expectedResult1);

    vector<int> students2 = {8, -8};
    vector<int> expectedResult2 = {};  
    runTest(students2, expectedResult2);

    vector<int> students3 = {10, -5, -5, 10};
    vector<int> expectedResult3 = {10, 10};
    runTest(students3, expectedResult3);

    return 0;
}
