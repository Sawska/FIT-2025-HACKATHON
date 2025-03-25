# Задано додатне тризначне число M. 
# Напишіть програму, яка порахує скільки девʼяток міститься у числі M.
# Формат вхідних даних. На вхід подається одне додатне трицифрове число N.
# Формат вихідних даних. Виведіть одне число – кількість девʼяток у числі M.


# def count_nines(M):
    

import time
def test_count_nines(M, expected_result):
    start_time = time.time()

    result = count_nines(M)

    end_time = time.time()

    print(f"Original number: {M}")
    print(f"Number of 9's: {result}")
    
    if result == expected_result:
        print("Test passed!")
    else:
        print(f"Test failed. Expected: {expected_result}")
    
    print(f"Time taken: {end_time - start_time:.6f} seconds")
    print("------------------------------")

if __name__ == "__main__":
    test_case_1 = 999
    expected_result_1 = 3

    test_case_2 = 529
    expected_result_2 = 1

    test_case_3 = 129
    expected_result_3 = 1

    print("Test Case 1:")
    test_count_nines(test_case_1, expected_result_1)

    print("Test Case 2:")
    test_count_nines(test_case_2, expected_result_2)

    print("Test Case 3:")
    test_count_nines(test_case_3, expected_result_3)
