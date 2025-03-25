# Завдання: Шифрування та розшифровка з використанням двох зсувів

# Реалізуйте функції для шифрування та розшифровки тексту за допомогою подвійного зсуву.
# Шифрування: Для кожної літери тексту спочатку виконується зсув за її позицією в алфавіті.
#  Потім застосовується зсув по ключу. Алфавіт використовується латинський (A-Z), без урахування регістру.
# •	Для кожної літери, спочатку обчислюємо її позицію в алфавіті. Позиція літери — це її порядковий номер в алфавіті
#  (наприклад, для 'A' — 1, для 'B' — 2 і так далі).
# •	Зсув по алфавіту для кожної літери обчислюється як (позиція літери в алфавіті - позиція літери в алфавіті / 2) (округлюється вниз).
# •	Після цього до кожної літери застосовуємо зсув по ключу (ціле число), який задається користувачем.
#  Ключ визначає на скільки позицій зсувається літера по алфавіту.
# Розшифровка: Для розшифровки застосовуємо зворотний процес: спочатку скасовуємо зсув по ключу, 
# а потім відновлюємо початкову позицію літери за допомогою зсуву по алфавіту.
# Приклад:
# •	Вхід:
# o	encode("HELLO", 3)
# •	Вихід:
# o	"OKUUZ"
# •	Вхід:
# o	decode("OKUUZ", 3)
# •	Вихід:
# o	"HELLO"
# Примітки:
# •	Алфавіт: A-Z (включаючи тільки латинські літери, без урахування регістру).
# ABCDEFGHIJKLMNOPQRSTUVWXYZ
# •	Пробіли та інші знаки пунктуації не змінюються.
# •	Якщо після зсуву літера виходить за межі 'Z', вона повертається на початок алфавіту.
# •	Задача вимагає правильного оброблення циклічності алфавіту.

# def encode(text, key):



# def decode(text, key):



import time
def test_performance(fn, *args):
    start_time = time.time()
    fn(*args)
    end_time = time.time()
    return (end_time - start_time) * 1000  # Convert to milliseconds

# Test cases to check encryption and decryption
def test_cases():
    test1 = 'HELLO'
    test2 = 'WORLD'
    test3 = 'ENCRYPTION TEST CASE'

    # Measure encryption performance
    print('Encryption Test 1:')
    time1 = test_performance(encode, test1, 3)
    print(f'Encryption time for "{test1}": {time1:.5f}ms')

    print('Encryption Test 2:')
    time2 = test_performance(encode, test2, 3)
    print(f'Encryption time for "{test2}": {time2:.5f}ms')

    print('Encryption Test 3:')
    time3 = test_performance(encode, test3, 3)
    print(f'Encryption time for "{test3}": {time3:.5f}ms')

    # Measure decryption performance
    print('Decryption Test 1:')
    time4 = test_performance(decode, encode(test1, 3), 3)
    print(f'Decryption time for "{test1}": {time4:.5f}ms')

    print('Decryption Test 2:')
    time5 = test_performance(decode, encode(test2, 3), 3)
    print(f'Decryption time for "{test2}": {time5:.5f}ms')

    print('Decryption Test 3:')
    time6 = test_performance(decode, encode(test3, 3), 3)
    print(f'Decryption time for "{test3}": {time6:.5f}ms')

# Run the tests
test_cases()
