# Створіть програму, яка буде рахувати кількість кількість англійських голосних літер в рядку
# ВВІД: Рядок тексту, який складається з будь-яких слів,
#  і який містить в собі тільки великі літери та пробіли 
# (Плюсом буде якщо учасник зробить обмеження для довжини рядка)
# ВИВІД: Єдине число, яке означає кількість голосних літер в рядку

# def count_vowels(s: str) -> int:



import time
def test():
    try:
        start = time.perf_counter()
        print("Pass" if count_vowels("HELLO WORLD") == 3 else "Fail")
        print(f"Test 1 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        print("Pass" if count_vowels("JAVA SCRIPT") == 3 else "Fail")
        print(f"Test 2 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        print("Pass" if count_vowels("AEIOU") == 5 else "Fail")
        print(f"Test 3 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        print("Pass" if count_vowels("BCDFG HJKLMNPQRSTVWXYZ") == 0 else "Fail")
        print(f"Test 4 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        print("Pass" if count_vowels("I LOVE PROGRAMMING") == 6 else "Fail")
        print(f"Test 5 executed in {(time.perf_counter() - start):.6f} sec")

        try:
            start = time.perf_counter()
            count_vowels("Hello World")  # Invalid (lowercase letters)
            print("Fail")
        except ValueError:
            print("Pass")
        print(f"Test 6 executed in {(time.perf_counter() - start):.6f} sec")

        try:
            start = time.perf_counter()
            count_vowels("THIS STRING IS WAY TOO LONG " * 10)  # Invalid (too long)
            print("Fail")
        except ValueError:
            print("Pass")
        print(f"Test 7 executed in {(time.perf_counter() - start):.6f} sec")

    except Exception as e:
        print(f"Test failed: {e}")

test()
