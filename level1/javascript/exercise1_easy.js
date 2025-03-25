// Задано додатне тризначне число M. 
// Напишіть програму, яка порахує скільки девʼяток міститься у числі M.
// Формат вхідних даних. На вхід подається одне додатне трицифрове число N.
// Формат вихідних даних. Виведіть одне число – кількість девʼяток у числі M.


function countNines(M) {

}


function testCountNines(M, expectedResult) {
    const startTime = performance.now();

    const result = countNines(M);

    const endTime = performance.now();

    console.log(`Original number: ${M}`);
    console.log(`Number of 9's: ${result}`);
    
    if (result === expectedResult) {
        console.log("Test passed!");
    } else {
        console.log(`Test failed. Expected: ${expectedResult}`);
    }

    console.log(`Time taken: ${(endTime - startTime).toFixed(6)} milliseconds`);
    console.log("------------------------------");
}


console.log("Test Case 1:");
testCountNines(999, 3);

console.log("Test Case 2:");
testCountNines(529, 1);

console.log("Test Case 3:");
testCountNines(129, 1);
