// Дано три прямокутних трикутники, задані своїми сторонами a, b та c. 
// Знайдіть трикутник із найбільшим периметром і виведіть значення його периметру. 
// Формат вхідних даних. У кожному з трьох рядків через пробіл подано три цілі числа: a, b, c.
// Формат вихідних даних. Виведіть одне ціле число – найбільший периметр серед трикутників.

function trianglePerimeter(triangles) {
    
}


const testCases = [
    [[3, 4, 5], [5, 12, 13], [8, 15, 17]],
    [[6, 8, 10], [9, 12, 15], [12, 16, 20]],
    [[7, 24, 25], [10, 24, 26], [15, 20, 25]]
];
const expectedResults = [40, 48, 60];

function testTrianglePerimeter() {
    const startTime = performance.now();
    testCases.forEach((test, index) => {
        const result = trianglePerimeter(test);
        console.assert(result === expectedResults[index], `Test case ${test} failed: expected ${expectedResults[index]}, got ${result}`);
    });
    const endTime = performance.now();
    console.log(`All JavaScript tests passed! Execution time: ${(endTime - startTime).toFixed(6)} milliseconds`);
}

testTrianglePerimeter();