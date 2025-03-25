# Задача: Найдовша спільна підпослідовність

# Реалізуйте знаходження найдовшої спільної підпослідовності. Суть полягає у пошуку найдовшої підпослідовності, 
# яка є спільною для двох заданих рядків.

# Важливо відрізняти цю задачу від знаходження спільних підрядків:
# •	Підпослідовність не обов’язково складається з послідовних символів у вихідному рядку.
# •	Підрядок, навпаки, має бути неперервним фрагментом вихідного рядка.

# Завдання:
# Напишіть функцію lcs(), яка приймає два рядки та повертає їхню найдовшу спільну підпослідовність у вигляді рядка.

# Приклади
# •	lcs("abcdef", "abc")  => "abc"
# •	lcs("abcdef", "acf")  => "acf"
# •	lcs("132535365", "123456789")  => "12356"
# •	lcs("abcdefghijklmnopq", "apcdefghijklmnobq")  => "acdefghijklmnoq"
# Тестування
# •	Середні випадкові тести: рядки до 20 символів
# •	Складні випадкові тести: рядки до 40 символів

# Примітки
# •	"" (порожній рядок) є допустимою відповіддю.
# •	Порядок аргументів не має значення:
# lcs(string1, string2) == lcs(string2, string1)

# def lcs(str1: str, str2: str) -> str:

def run_tests():
    assert lcs("abcdef", "abc") == "abc"
    assert lcs("abcdef", "acf") == "acf"
    assert lcs("132535365", "123456789") == "12356"
    assert lcs("abcdefghijklmnopq", "apcdefghijklmnobq") == "acdefghijklmnoq"
    assert lcs("abcd", "xyz") == ""  # No common subsequence
    assert lcs("", "abcdef") == ""  # Empty string case
    assert lcs("abc", "abc") == "abc"  # Identical strings

    print("All test cases passed!")

# Run tests
run_tests()

    