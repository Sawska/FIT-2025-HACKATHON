//  Задача: "Запізнілий студент і сходи"  

// Умова:  
// Студент Вася проспав і запізнюється на важливу пару, 
// що проходить на *n*-му поверсі. Ліфт не працює, 
// і він може підніматися лише на 1 або 2 поверхи за раз.  

// Напишіть програму, яка визначає, скількома способами 
// Вася може дістатися до n-го поверху, якщо починає з 0-го.  

// Вхідні дані:  
// Одне ціле число n — номер поверху, де знаходиться аудиторія

// Вихідні дані:  
// Виведіть кількість можливих способів піднятися на n -й поверх.  

function countWays(n) {
}


function runTest(n, expectedResult) {
    console.log(`Testing for n = ${n}...`);
    
    const startTime = performance.now();
    const result = countWays(n);
    const endTime = performance.now();


    const testPassed = result === expectedResult;

    if (testPassed) {
        console.log("Test Passed!");
    } else {
        console.log(`Test Failed. Expected: ${expectedResult}, Got: ${result}`);
    }

    console.log(`Execution time: ${(endTime - startTime).toFixed(6)} ms\n`);
}


function main() {
    console.log("Testing Exercise 1: Late Student and Stairs");


    const n1 = 10;
    const expectedResult1 = 89;  
    runTest(n1, expectedResult1);

    const n2 = 25;
    const expectedResult2 = 121393; 
    runTest(n2, expectedResult2);

    const n3 = 40;
    const expectedResult3 = 165580141;  
    runTest(n3, expectedResult3);
}


main();
