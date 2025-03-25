// Уявіть, що ви хочете надрукувати на принтері піраміду з будь-якого символу і висотою h. 
// Напишіть для цього код, але такий, щоб 
// ця піраміда друкувалася з найменшою кількістю символів, щоб чорнила в принтері не переводилися.
// ВВІД: В першому рядку вводиться символ, з якого буде друкуватися піраміда, 
// в другому - число h, що задаватиме висоту піраміди 
// (Плюсом буде якщо учасник зробить для висоти якесь обмеження, щоб піраміда не могла бути занадто великою)
// ВИВІД: В першому рядку виведіть загальну кількість 
// "надрукованих символів" числом, в другому - саму символьну піраміду.
// (Вирішується по формулі суми перших непарних чисел і реалізується за допомогою простого циклу)


function printPyramid(char, h) {
}


function test() {
    try {
        let start, end;

        start = performance.now();
        console.log(printPyramid("*", 3) === "9\n  *\n ***\n*****" ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 1 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(printPyramid("#", 5) === "25\n    #\n   ###\n  #####\n #######\n#########" ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 2 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(printPyramid("$", 1) === "1\n$" ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 3 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(printPyramid("@", 4) === "16\n   @\n  @@@\n @@@@@\n@@@@@@@" ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 4 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(printPyramid("X", 6) === "36\n     X\n    XXX\n   XXXXX\n  XXXXXXX\n XXXXXXXXX\nXXXXXXXXXXX" ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 5 executed in ${(end - start).toFixed(4)} ms`);

        try {
            start = performance.now();
            printPyramid("**", 3); // Invalid character
            console.log("Fail");
        } catch (e) {
            console.log("Pass");
        }
        end = performance.now();
        console.log(`Test 6 executed in ${(end - start).toFixed(4)} ms`);

        try {
            start = performance.now();
            printPyramid("&", 0); // Invalid height
            console.log("Fail");
        } catch (e) {
            console.log("Pass");
        }
        end = performance.now();
        console.log(`Test 7 executed in ${(end - start).toFixed(4)} ms`);

        try {
            start = performance.now();
            printPyramid("O", 51); // Too large
            console.log("Fail");
        } catch (e) {
            console.log("Pass");
        }
        end = performance.now();
        console.log(`Test 8 executed in ${(end - start).toFixed(4)} ms`);

    } catch (e) {
        console.error("Test failed: ", e.message);
    }
}

test();
