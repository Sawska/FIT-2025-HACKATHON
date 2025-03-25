#include "exercise3_hard.h"
#include <iostream>
#include <cassert>

using namespace std;

// Test function
void test_polybius_cipher() {
    initialize_lookup_maps();

    // Test 1: Encrypt "HELLO"
    assert(polybius_encrypt("HELLO") == "23 15 31 31 34");
    cout << "✔ Encrypt HELLO -> Pass" << endl;

    // Test 2: Decrypt "23 15 31 31 34"
    assert(polybius_decrypt("23 15 31 31 34") == "HELLO");
    cout << "✔ Decrypt HELLO -> Pass" << endl;

    // Test 3: Encrypt "JACK"
    assert(polybius_encrypt("JACK") == "24 11 13 25");  // "J" should be replaced by "I"
    cout << "✔ Encrypt JACK -> Pass" << endl;

    // Test 4: Decrypt "24 11 13 25"
    assert(polybius_decrypt("24 11 13 25") == "IACK");
    cout << "✔ Decrypt IACK (JACK) -> Pass" << endl;

    // Test 5: Encrypt "WORLD"
    assert(polybius_encrypt("WORLD") == "52 34 42 13 14");
    cout << "✔ Encrypt WORLD -> Pass" << endl;

    // Test 6: Decrypt "52 34 42 13 14"
    assert(polybius_decrypt("52 34 42 13 14") == "WORLD");
    cout << "✔ Decrypt WORLD -> Pass" << endl;

    cout << "All tests passed!" << endl;
}

// Main function
int main() {
    test_polybius_cipher();
    return 0;
}
