# Уявіть, що перед вами - шахова дошка розміром n на n клітинок,
#  і ці клітинки пронумеровані натуральними числами від 1 до n^2 зліва направо по порядку так,
#  що в кожній білій клітинці міститься непарне число, а в чорних - відповідно всі парні.
#  Порахуйте, яка сума чисел, записаних в білих клітинках
# ВВІД: Введіть одне натуральне парне число n - розмір шахової дошки. 
# (Плюсом буде якщо учасник зробить обмеження для n)
# ВИВІД: Виведіть суму чисел на білих клітинках

# def sum_white_cells(n):

import time

def test():
    try:
        start = time.perf_counter()
        assert sum_white_cells(2) == 5
        print("Pass")
        print(f"Test 1 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        assert sum_white_cells(4) == 40
        print("Pass")
        print(f"Test 2 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        assert sum_white_cells(6) == 126
        print("Pass")
        print(f"Test 3 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        assert sum_white_cells(8) == 288
        print("Pass")
        print(f"Test 4 executed in {(time.perf_counter() - start):.6f} sec")

        start = time.perf_counter()
        assert sum_white_cells(10) == 550
        print("Pass")
        print(f"Test 5 executed in {(time.perf_counter() - start):.6f} sec")

        try:
            start = time.perf_counter()
            sum_white_cells(3)  # Invalid input (odd number)
            print("Fail")
        except ValueError:
            print("Pass")
        print(f"Test 6 executed in {(time.perf_counter() - start):.6f} sec")

        try:
            start = time.perf_counter()
            sum_white_cells(1001)  # Invalid input (too large)
            print("Fail")
        except ValueError:
            print("Pass")
        print(f"Test 7 executed in {(time.perf_counter() - start):.6f} sec")

    except AssertionError:
        print("Test failed!")

test()

