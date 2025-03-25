#include <iostream>
#include <cassert>
#include "exercise4_hard.h"

void run_tests() {
    // Test cases for the LCS function
    assert(lcs("abcdef", "abc") == "abc");
    assert(lcs("abcdef", "acf") == "acf");
    assert(lcs("132535365", "123456789") == "12356");
    assert(lcs("abcdefghijklmnopq", "apcdefghijklmnobq") == "acdefghijklmnoq");
    assert(lcs("abcd", "xyz") == "");  // No common subsequence
    assert(lcs("", "abcdef") == "");  // Empty string case
    assert(lcs("abc", "abc") == "abc");  // Identical strings

    std::cout << "All test cases passed!" << std::endl;
}

int main() {
    // Run the tests
    run_tests();
    return 0;
}
