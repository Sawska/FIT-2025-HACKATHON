# Задача: "Запізнілий студент та натовп у коридорі"  

# Умова:
# Студент Вася запізнюється на пару та біжить вузьким університетським коридором. 
# У коридорі також рухаються інші студенти. Кожен студент має свою вагу (абсолютне значення числа) 
# і напрямок руху (позитивне число — вперед, негативне — назад).  

# Всі студенти рухаються з однаковою швидкістю. Якщо двоє студентів зустрічаються:  
# - Той, у кого менша вага, поступається і вибуває.  
# - Якщо обидва мають однакову вагу, вони обоє зупиняються та вибувають.  
# - Якщо студенти рухаються в одному напрямку, вони ніколи не зіткнуться.  

# Знайдіть, хто залишиться в коридорі після всіх можливих зіткнень.  


# Приклад роботи програми
# Вхід:  

# студенти = [5,10,-5]  

# Вихід:

# [5,10] 
 

# def resolve_students(students):




import time
def run_test(students, expected_result):
    print(f"Testing for students: {' '.join(map(str, students))}")
    
    start_time = time.time()
    result = resolve_students(students)
    end_time = time.time()

    test_passed = result == expected_result

    if test_passed:
        print("Test Passed!")
    else:
        print(f"Test Failed. Expected: {' '.join(map(str, expected_result))}, Got: {' '.join(map(str, result))}")

    print(f"Execution time: {end_time - start_time:.6f} seconds\n")



if __name__ == "__main__":
    print("Testing Exercise 2: Students in Corridor")


    students1 = [5, 10, -5]
    expected_result1 = [5, 10]
    run_test(students1, expected_result1)

    students2 = [8, -8]
    expected_result2 = []
    run_test(students2, expected_result2)

    students3 = [10, -5, -5, 10]
    expected_result3 = [10, 10]  
    run_test(students3, expected_result3)
