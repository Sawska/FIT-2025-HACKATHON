// Уявіть, що перед вами - шахова дошка розміром n на n клітинок,
//  і ці клітинки пронумеровані натуральними числами від 1 до n^2 зліва направо по порядку так,
//  що в кожній білій клітинці міститься непарне число, а в чорних - відповідно всі парні.
//  Порахуйте, яка сума чисел, записаних в білих клітинках
// ВВІД: Введіть одне натуральне парне число n - розмір шахової дошки. 
// (Плюсом буде якщо учасник зробить обмеження для n)
// ВИВІД: Виведіть суму чисел на білих клітинках

function sumWhiteCells(n) {

}


function test() {
    try {
        let start, end;

        start = performance.now();
        console.log(sumWhiteCells(2) === 5 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 1 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(sumWhiteCells(4) === 40 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 2 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(sumWhiteCells(6) === 126 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 3 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(sumWhiteCells(8) === 288 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 4 executed in ${(end - start).toFixed(4)} ms`);

        start = performance.now();
        console.log(sumWhiteCells(10) === 550 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 5 executed in ${(end - start).toFixed(4)} ms`);

        try {
            start = performance.now();
            sumWhiteCells(3); // Invalid input (odd number)
            console.log("Fail");
        } catch (e) {
            end = performance.now();
            console.log("Pass");
        }
        console.log(`Test 6 executed in ${(end - start).toFixed(4)} ms`);

        try {
            start = performance.now();
            sumWhiteCells(1001); // Invalid input (too large)
            console.log("Fail");
        } catch (e) {
            end = performance.now();
            console.log("Pass");
        }
        console.log(`Test 7 executed in ${(end - start).toFixed(4)} ms`);

    } catch (e) {
        console.error("Test failed:", e.message);
    }
}

test();
