// Завдання: Шифрування та розшифровка з використанням двох зсувів

// Реалізуйте функції для шифрування та розшифровки тексту за допомогою подвійного зсуву.
// Шифрування: Для кожної літери тексту спочатку виконується зсув за її позицією в алфавіті.
//  Потім застосовується зсув по ключу. Алфавіт використовується латинський (A-Z), без урахування регістру.
// •	Для кожної літери, спочатку обчислюємо її позицію в алфавіті. Позиція літери — це її порядковий номер в алфавіті
//  (наприклад, для 'A' — 1, для 'B' — 2 і так далі).
// •	Зсув по алфавіту для кожної літери обчислюється як (позиція літери в алфавіті - позиція літери в алфавіті / 2) (округлюється вниз).
// •	Після цього до кожної літери застосовуємо зсув по ключу (ціле число), який задається користувачем.
//  Ключ визначає на скільки позицій зсувається літера по алфавіту.
// Розшифровка: Для розшифровки застосовуємо зворотний процес: спочатку скасовуємо зсув по ключу, 
// а потім відновлюємо початкову позицію літери за допомогою зсуву по алфавіту.
// Приклад:
// •	Вхід:
// o	encode("HELLO", 3)
// •	Вихід:
// o	"OKUUZ"
// •	Вхід:
// o	decode("OKUUZ", 3)
// •	Вихід:
// o	"HELLO"
// Примітки:
// •	Алфавіт: A-Z (включаючи тільки латинські літери, без урахування регістру).
// ABCDEFGHIJKLMNOPQRSTUVWXYZ
// •	Пробіли та інші знаки пунктуації не змінюються.
// •	Якщо після зсуву літера виходить за межі 'Z', вона повертається на початок алфавіту.
// •	Задача вимагає правильного оброблення циклічності алфавіту.



function encode(text, key) {

  }
  
  function decode(text, key) {

  }
  
  function testPerformance(fn, ...args) {
    const start = performance.now();
    fn(...args);
    const end = performance.now();
    return end - start;
  }
  

  function testCases() {
    const test1 = 'HELLO';
    const test2 = 'WORLD';
    const test3 = 'ENCRYPTION TEST CASE';
  

    console.log('Encryption Test 1:');
    const time1 = testPerformance(encode, test1, 3);
    console.log(`Encryption time for "${test1}": ${time1}ms`);
  
    console.log('Encryption Test 2:');
    const time2 = testPerformance(encode, test2, 3);
    console.log(`Encryption time for "${test2}": ${time2}ms`);
  
    console.log('Encryption Test 3:');
    const time3 = testPerformance(encode, test3, 3);
    console.log(`Encryption time for "${test3}": ${time3}ms`);
  

    console.log('Decryption Test 1:');
    const time4 = testPerformance(decode, encode(test1, 3), 3);
    console.log(`Decryption time for "${test1}": ${time4}ms`);
  
    console.log('Decryption Test 2:');
    const time5 = testPerformance(decode, encode(test2, 3), 3);
    console.log(`Decryption time for "${test2}": ${time5}ms`);
  
    console.log('Decryption Test 3:');
    const time6 = testPerformance(decode, encode(test3, 3), 3);
    console.log(`Decryption time for "${test3}": ${time6}ms`);
  }
  

  testCases();
  