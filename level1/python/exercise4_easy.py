# Уявіть, що ви хочете надрукувати на принтері піраміду з будь-якого символу і висотою h. 
# Напишіть для цього код, але такий, щоб 
# ця піраміда друкувалася з найменшою кількістю символів, щоб чорнила в принтері не переводилися.
# ВВІД: В першому рядку вводиться символ, з якого буде друкуватися піраміда, 
# в другому - число h, що задаватиме висоту піраміди 
# (Плюсом буде якщо учасник зробить для висоти якесь обмеження, щоб піраміда не могла бути занадто великою)
# ВИВІД: В першому рядку виведіть загальну кількість 
# "надрукованих символів" числом, в другому - саму символьну піраміду.
# (Вирішується по формулі суми перших непарних чисел і реалізується за допомогою простого циклу)

# def print_pyramid(char: str, h: int) -> str:
    

import time

def test():
    try:
        start = time.time()
        assert print_pyramid("*", 3) == "9\n  *\n ***\n*****"
        end = time.time()
        print(f"Test 1: Pass (Executed in {end - start:.6f} sec)")

        start = time.time()
        assert print_pyramid("#", 5) == "25\n    #\n   ###\n  #####\n #######\n#########"
        end = time.time()
        print(f"Test 2: Pass (Executed in {end - start:.6f} sec)")

        start = time.time()
        assert print_pyramid("$", 1) == "1\n$"
        end = time.time()
        print(f"Test 3: Pass (Executed in {end - start:.6f} sec)")

        start = time.time()
        assert print_pyramid("@", 4) == "16\n   @\n  @@@\n @@@@@\n@@@@@@@"
        end = time.time()
        print(f"Test 4: Pass (Executed in {end - start:.6f} sec)")

        start = time.time()
        assert print_pyramid("X", 6) == "36\n     X\n    XXX\n   XXXXX\n  XXXXXXX\n XXXXXXXXX\nXXXXXXXXXXX"
        end = time.time()
        print(f"Test 5: Pass (Executed in {end - start:.6f} sec)")

        try:
            start = time.time()
            print_pyramid("**", 3)  # Invalid character
            print("Test 6: Fail")
        except ValueError:
            end = time.time()
            print(f"Test 6: Pass (Executed in {end - start:.6f} sec)")

        try:
            start = time.time()
            print_pyramid("&", 0)  # Invalid height
            print("Test 7: Fail")
        except ValueError:
            end = time.time()
            print(f"Test 7: Pass (Executed in {end - start:.6f} sec)")

        try:
            start = time.time()
            print_pyramid("O", 51)  # Height too large
            print("Test 8: Fail")
        except ValueError:
            end = time.time()
            print(f"Test 8: Pass (Executed in {end - start:.6f} sec)")

    except AssertionError:
        print("Test failed")

test()
