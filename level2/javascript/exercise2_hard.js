// Задача: "Запізнілий студент та натовп у коридорі"  

// Умова:
// Студент Вася запізнюється на пару та біжить вузьким університетським коридором. 
// У коридорі також рухаються інші студенти. Кожен студент має свою вагу (абсолютне значення числа) 
// і напрямок руху (позитивне число — вперед, негативне — назад).  

// Всі студенти рухаються з однаковою швидкістю. Якщо двоє студентів зустрічаються:  
// - Той, у кого менша вага, поступається і вибуває.  
// - Якщо обидва мають однакову вагу, вони обоє зупиняються та вибувають.  
// - Якщо студенти рухаються в одному напрямку, вони ніколи не зіткнуться.  

// Знайдіть, хто залишиться в коридорі після всіх можливих зіткнень.  


// Приклад роботи програми
// Вхід:  

// студенти = [5,10,-5]  

// Вихід:

// [5,10] 


// Function to resolve the students in the corridor after collisions
function resolveStudents(students) {
    
}

// Test Function
function runTest(students, expectedResult) {
    console.log(`Testing for students: ${students.join(", ")}`);
    
    const startTime = performance.now();
    const result = resolveStudents(students);
    const endTime = performance.now();

    // Check if the result matches the expected result
    const testPassed = JSON.stringify(result) === JSON.stringify(expectedResult);

    if (testPassed) {
        console.log("Test Passed!");
    } else {
        console.log(`Test Failed. Expected: [${expectedResult.join(", ")}], Got: [${result.join(", ")}]`);
    }

    console.log(`Execution time: ${(endTime - startTime).toFixed(6)} ms\n`);
}


function main() {
    console.log("Testing Exercise 2: Late Student and Crowd in the Corridor");

    const students1 = [5, 10, -5];
    const expectedResult1 = [5, 10];
    runTest(students1, expectedResult1);

    const students2 = [8, -8];
    const expectedResult2 = [];
    runTest(students2, expectedResult2);

    const students3 = [10, -5, -5, 10];
    const expectedResult3 = [10, 10];  
    runTest(students3, expectedResult3);

    const students4 = [];
    const expectedResult4 = []; 
    runTest(students4, expectedResult4);

    const students5 = [5];
    const expectedResult5 = [5];  
    runTest(students5, expectedResult5);

    const students6 = [5, 10, 15];
    const expectedResult6 = [5, 10, 15];
    runTest(students6, expectedResult6);
}


main();
