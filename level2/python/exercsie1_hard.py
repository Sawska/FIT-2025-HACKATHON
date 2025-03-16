
# Задача: "Запізнілий студент і сходи"  

# Умова:  
# Студент Вася проспав і запізнюється на важливу пару, 
# що проходить на *n*-му поверсі. Ліфт не працює, 
# і він може підніматися лише на 1 або 2 поверхи за раз.  

# Напишіть програму, яка визначає, скількома способами 
# Вася може дістатися до n-го поверху, якщо починає з 0-го.  

# Вхідні дані:  
# Одне ціле число n — номер поверху, де знаходиться аудиторія

# Вихідні дані:  
# Виведіть кількість можливих способів піднятися на n -й поверх.  


# def count_ways(n):


import time

def run_test(n, expected_result):
    print(f"Testing for n = {n}")
    
    start_time = time.time()
    result = count_ways(n)
    end_time = time.time()

    test_passed = result == expected_result

    if test_passed:
        print("Test Passed!")
    else:
        print(f"Test Failed. Expected: {expected_result}, Got: {result}")

    print(f"Execution time: {end_time - start_time:.6f} seconds\n")



if __name__ == "__main__":
    print("Testing Exercise 1: Late Student and Stairs")

    
    n1 = 10
    expected_result1 = 89  
    run_test(n1, expected_result1)

    n2 = 25
    expected_result2 = 121393 
    run_test(n2, expected_result2)

    n3 = 40
    expected_result3 = 165580141  
    run_test(n3, expected_result3)
