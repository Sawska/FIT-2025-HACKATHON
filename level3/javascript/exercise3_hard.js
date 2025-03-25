// Шифр "Шахова дошка" (Polybius Square Cipher)

// Реалізуйте алгоритм шифрування за допомогою таблиці 5×5 (Polybius Square), 
// де кожна буква має координати (рядок, стовпець). Використовуйте стандартну таблицю без літери "J" 
// (замість неї використовується "I").

// 1	2	3	4	5
// 1	A	B	C	D	E
// 2	F	G	H	I/J	K
// 3	L	M	N	O	P
// 4	Q	R	S	T	U
// 5	V	W	X	Y	Z
// Приклад:
// Вхідний рядок: "HELLO"
// Шифрується у: "23 15 31 31 34"

// Завдання:
// •	Реалізуйте функцію шифрування тексту.
// •	Реалізуйте функцію дешифрування.



const polybiusSquare = [
    ['A', 'B', 'C', 'D', 'E'],
    ['F', 'G', 'H', 'I', 'K'], // "I" and "J" are treated as the same letter
    ['L', 'M', 'N', 'O', 'P'],
    ['Q', 'R', 'S', 'T', 'U'],
    ['V', 'W', 'X', 'Y', 'Z']
];


const letterToCoords = {};
const coordsToLetter = {};

for (let row = 0; row < 5; row++) {
    for (let col = 0; col < 5; col++) {
        const letter = polybiusSquare[row][col];
        letterToCoords[letter] = `${row + 1}${col + 1}`;
        coordsToLetter[`${row + 1}${col + 1}`] = letter;
    }
}


function polybiusEncrypt(text) {

}


function polybiusDecrypt(code) {

}


function testPolybiusCipher() {
    console.log("Running tests...");

    // Test 1: Encrypt "HELLO"
    let encrypted = polybiusEncrypt("HELLO");
    console.log(encrypted === "23 15 31 31 34" ? "Pass" : "Fail", "- Encrypt HELLO");

    // Test 2: Decrypt "23 15 31 31 34"
    let decrypted = polybiusDecrypt("23 15 31 31 34");
    console.log(decrypted === "HELLO" ? "Pass" : "Fail", "- Decrypt HELLO");

    // Test 3: Encrypt "JACK"
    encrypted = polybiusEncrypt("JACK"); // "J" should be replaced by "I"
    console.log(encrypted === "24 11 13 25" ? "Pass" : "Fail", "- Encrypt JACK");

    // Test 4: Decrypt "24 11 13 25"
    decrypted = polybiusDecrypt("24 11 13 25");
    console.log(decrypted === "IACK" ? "Pass" : "Fail", "- Decrypt IACK (JACK)");

    // Test 5: Encrypt "WORLD"
    encrypted = polybiusEncrypt("WORLD");
    console.log(encrypted === "52 34 42 13 14" ? "Pass" : "Fail", "- Encrypt WORLD");

    // Test 6: Decrypt "52 34 42 13 14"
    decrypted = polybiusDecrypt("52 34 42 13 14");
    console.log(decrypted === "WORLD" ? "Pass" : "Fail", "- Decrypt WORLD");

    console.log("Tests completed.");
}

testPolybiusCipher();
