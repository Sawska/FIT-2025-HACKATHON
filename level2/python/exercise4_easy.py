# Дано три прямокутних трикутники, задані своїми сторонами a, b та c. 
# Знайдіть трикутник із найбільшим периметром і виведіть значення його периметру. 
# Формат вхідних даних. У кожному з трьох рядків через пробіл подано три цілі числа: a, b, c.
# Формат вихідних даних. Виведіть одне ціле число – найбільший периметр серед трикутників.


# def triangle_perimeter(triangles):



test_cases = [
    [(3, 4, 5), (5, 12, 13), (8, 15, 17)],
    [(6, 8, 10), (9, 12, 15), (12, 16, 20)],
    [(7, 24, 25), (10, 24, 26), (15, 20, 25)]
]

expected_results = [40, 48, 60]

import time

def test_triangle_perimeter():
    start_time = time.time()
    for i, test in enumerate(test_cases):
        result = triangle_perimeter(test)
        assert result == expected_results[i], f"Test case {test} failed: expected {expected_results[i]}, got {result}"
    end_time = time.time()
    print(f"All Python tests passed! Execution time: {end_time - start_time:.6f} seconds")

test_triangle_perimeter()
