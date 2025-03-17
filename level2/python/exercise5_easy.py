# Від трицифрового числа N взяли першу цифру, 
# прибрали її та додали в кінець числа. Наприклад, якщо N = 146:
# 146 —> 461 Знайдіть отримане число Р.
# Формат вхідних даних. На вхід подається одне натуральне трицифрове число N.
# Формат вихідних даних. Виведіть число P.

# def rotate_number(n):



test_cases = [146, 802, 375]
expected_results = [461, 28, 753]


import time
def test_rotate_number():
    start_time = time.time()
    for i, test in enumerate(test_cases):
        result = rotate_number(test)
        assert result == expected_results[i], f"Test case {test} failed: expected {expected_results[i]}, got {result}"
    end_time = time.time()
    print(f"All Python tests passed! Execution time: {end_time - start_time:.6f} seconds")

test_rotate_number()