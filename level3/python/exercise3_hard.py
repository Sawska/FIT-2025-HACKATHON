# Шифр "Шахова дошка" (Polybius Square Cipher)

# Реалізуйте алгоритм шифрування за допомогою таблиці 5×5 (Polybius Square), 
# де кожна буква має координати (рядок, стовпець). Використовуйте стандартну таблицю без літери "J" 
# (замість неї використовується "I").

# 1	2	3	4	5
# 1	A	B	C	D	E
# 2	F	G	H	I/J	K
# 3	L	M	N	O	P
# 4	Q	R	S	T	U
# 5	V	W	X	Y	Z
# Приклад:
# Вхідний рядок: "HELLO"
# Шифрується у: "23 15 31 31 34"

# Завдання:
# •	Реалізуйте функцію шифрування тексту.
# •	Реалізуйте функцію дешифрування.

# Define the Polybius Square
polybius_square = [
    ['A', 'B', 'C', 'D', 'E'],
    ['F', 'G', 'H', 'I', 'K'],  # "J" is replaced by "I"
    ['L', 'M', 'N', 'O', 'P'],
    ['Q', 'R', 'S', 'T', 'U'],
    ['V', 'W', 'X', 'Y', 'Z']
]

# Create lookup dictionaries
letter_to_coords = {}
coords_to_letter = {}

for row in range(5):
    for col in range(5):
        letter = polybius_square[row][col]
        letter_to_coords[letter] = f"{row + 1}{col + 1}"
        coords_to_letter[f"{row + 1}{col + 1}"] = letter


# def polybius_encrypt(text):


# def polybius_decrypt(code):



def test_polybius_cipher():
    print("Running tests...")

    # Test 1: Encrypt "HELLO"
    encrypted = polybius_encrypt("HELLO")
    print("Pass" if encrypted == "23 15 31 31 34" else "Fail", "- Encrypt HELLO")

    # Test 2: Decrypt "23 15 31 31 34"
    decrypted = polybius_decrypt("23 15 31 31 34")
    print("Pass" if decrypted == "HELLO" else "Fail", "- Decrypt HELLO")

    # Test 3: Encrypt "JACK"
    encrypted = polybius_encrypt("JACK")  # "J" should be replaced by "I"
    print("Pass" if encrypted == "24 11 13 25" else "Fail", "- Encrypt JACK")

    # Test 4: Decrypt "24 11 13 25"
    decrypted = polybius_decrypt("24 11 13 25")
    print("Pass" if decrypted == "IACK" else "Fail", "- Decrypt IACK (JACK)")

    # Test 5: Encrypt "WORLD"
    encrypted = polybius_encrypt("WORLD")
    print("Pass" if encrypted == "52 34 42 13 14" else "Fail", "- Encrypt WORLD")

    # Test 6: Decrypt "52 34 42 13 14"
    decrypted = polybius_decrypt("52 34 42 13 14")
    print("Pass" if decrypted == "WORLD" else "Fail", "- Decrypt WORLD")

    print("Tests completed.")

test_polybius_cipher()
