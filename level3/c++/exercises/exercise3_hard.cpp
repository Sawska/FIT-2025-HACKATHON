#include "exercise3_hard.h"
#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;


char polybius_square[5][5] = {
    {'A', 'B', 'C', 'D', 'E'},
    {'F', 'G', 'H', 'I', 'K'},  // "J" is replaced by "I"
    {'L', 'M', 'N', 'O', 'P'},
    {'Q', 'R', 'S', 'T', 'U'},
    {'V', 'W', 'X', 'Y', 'Z'}
};


unordered_map<char, string> letter_to_coords;
unordered_map<string, char> coords_to_letter;


void initialize_lookup_maps() {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            char letter = polybius_square[row][col];
            string coordinates = to_string(row + 1) + to_string(col + 1);
            letter_to_coords[letter] = coordinates;
            coords_to_letter[coordinates] = letter;
        }
    }
}


string polybius_encrypt(const string &text) {
    
}


string polybius_decrypt(const string &code) {

}

/*
ДЛЯ ПЕРЕВІРКИ: 
g++ -Wall -O2 -std=c++11 -I./exercises -I./tests ./tests/test_exercise3_hard.cpp ./exercises/exercise3_hard.cpp -o test_exercise3_hard && ./test_exercise3_hard
*/