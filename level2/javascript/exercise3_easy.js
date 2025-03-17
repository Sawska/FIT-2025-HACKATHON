// Дано ціле число A. Потрібно написати програму,
//  яка виведе наступне за A парне число.
// Формат вхідних даних.  Подається одне ціле число A.
// Формат вихідних даних. 
// Виводиться наступне парне ціле число після A.

function nextEven(a) {
    
}


const testCases = [0, 1, 2, 7, 10, -1, -4];
const expectedResults = [2, 2, 4, 8, 12, 0, -2];

function testNextEven() {
    const startTime = performance.now();
    testCases.forEach((test, index) => {
        const result = nextEven(test);
        console.assert(result === expectedResults[index], `Test case ${test} failed: expected ${expectedResults[index]}, got ${result}`);
    });
    const endTime = performance.now();
    console.log(`All JavaScript tests passed! Execution time: ${(endTime - startTime).toFixed(6)} milliseconds`);
}

testNextEven();
