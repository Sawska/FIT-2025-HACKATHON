// Ви - криптограф, якому доручили завдання розробити систему перевірки надійності паролю 
// для входу в акаунт. Пароль складажться з чотирьох цифр,
//  і вважається ненадійним, якщо у ньому всі цифри однакові,
//  або якщо кожна наступна цифра більша за попередню рівно на один.
// ВВІД: Введіть одне ціле число n (1000≤n≤9999)
// ВИВІД: Якщо пароль ненадійний - виведіть "This password is weak", 
// якщо надійний - "This password is strong"

function checkPasswordStrength(n) {

}

function runTest(n, expected, testNumber) {
    let start = performance.now();
    let result = checkPasswordStrength(n);
    let end = performance.now();

    console.log(result === expected ? "Pass" : "Fail");
    console.log(`Test ${testNumber} executed in ${(end - start).toFixed(4)} ms`);
}

function test() {
    runTest(1111, "This password is weak", 1);
    runTest(1234, "This password is weak", 2);
    runTest(5678, "This password is weak", 3);
    runTest(9876, "This password is strong", 4);
    runTest(1357, "This password is strong", 5);
    runTest(2468, "This password is strong", 6);
    runTest(9999, "This password is weak", 7);
    runTest(1001, "This password is strong", 8);
}

test();
