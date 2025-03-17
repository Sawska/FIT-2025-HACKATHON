// Від трицифрового числа N взяли першу цифру, 
// прибрали її та додали в кінець числа. Наприклад, якщо N = 146:
// 146 —> 461 Знайдіть отримане число Р.
// Формат вхідних даних. На вхід подається одне натуральне трицифрове число N.
// Формат вихідних даних. Виведіть число P.

function rotateNumber(n) {

}


const testCases = [146, 802, 375];
const expectedResults = [461, 28, 753];

function testRotateNumber() {
    const startTime = performance.now();
    testCases.forEach((test, index) => {
        const result = rotateNumber(test);
        console.assert(result === expectedResults[index], `Test case ${test} failed: expected ${expectedResults[index]}, got ${result}`);
    });
    const endTime = performance.now();
    console.log(`All JavaScript tests passed! Execution time: ${(endTime - startTime).toFixed(6)} milliseconds`);
}

testRotateNumber();