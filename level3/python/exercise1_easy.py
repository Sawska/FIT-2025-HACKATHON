# Ви - криптограф, якому доручили завдання розробити систему перевірки надійності паролю 
# для входу в акаунт. Пароль складажться з чотирьох цифр,
#  і вважається ненадійним, якщо у ньому всі цифри однакові,
#  або якщо кожна наступна цифра більша за попередню рівно на один.
# ВВІД: Введіть одне ціле число n (1000≤n≤9999)
# ВИВІД: Якщо пароль ненадійний - виведіть "This password is weak", 
# якщо надійний - "This password is strong"

# def check_password_strength(n):

import time

def run_test(n, expected, test_number):
    start = time.time()
    result = check_password_strength(n)
    end = time.time()

    print("Pass" if result == expected else "Fail")
    print(f"Test {test_number} executed in {(end - start) * 1000:.4f} ms")

def test():
    run_test(1111, "This password is weak", 1)
    run_test(1234, "This password is weak", 2)
    run_test(5678, "This password is weak", 3)
    run_test(9876, "This password is strong", 4)
    run_test(1357, "This password is strong", 5)
    run_test(2468, "This password is strong", 6)
    run_test(9999, "This password is weak", 7)
    run_test(1001, "This password is strong", 8)

test()

