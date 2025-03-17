# Дано ціле число A. Потрібно написати програму,
#  яка виведе наступне за A парне число.
# Формат вхідних даних.  Подається одне ціле число A.
# Формат вихідних даних. 
# Виводиться наступне парне ціле число після A.


# def next_even(a: int) -> int:

test_cases = [0, 1, 2, 7, 10, -1, -4]
expected_results = [2, 2, 4, 8, 12, 0, -2]

import time


def test_next_even():
    start_time = time.time()
    for i, test in enumerate(test_cases):
        result = next_even(test)
        assert result == expected_results[i], f"Test case {test} failed: expected {expected_results[i]}, got {result}"
    end_time = time.time()
    print(f"All Python tests passed! Execution time: {end_time - start_time:.6f} seconds")

test_next_even()
