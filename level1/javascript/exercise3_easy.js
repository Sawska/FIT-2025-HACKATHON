// Створіть програму, яка буде рахувати кількість кількість англійських голосних літер в рядку
// ВВІД: Рядок тексту, який складається з будь-яких слів,
//  і який містить в собі тільки великі літери та пробіли 
// (Плюсом буде якщо учасник зробить обмеження для довжини рядка)
// ВИВІД: Єдине число, яке означає кількість голосних літер в рядку

function countVowels(str) {

}


function test() {
    try {
        let start, end;
        
        start = performance.now();
        console.log(countVowels("HELLO WORLD") === 3 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 1 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(countVowels("JAVA SCRIPT") === 3 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 2 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(countVowels("AEIOU") === 5 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 3 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(countVowels("BCDFG HJKLMNPQRSTVWXYZ") === 0 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 4 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(countVowels("I LOVE PROGRAMMING") === 6 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 5 executed in ${(end - start).toFixed(4)} ms`);
        
        try {
            start = performance.now();
            countVowels("Hello World");
            console.log("Fail");
            end = performance.now();
        } catch (e) {
            end = performance.now();
            console.log("Pass");
        }
        console.log(`Test 6 executed in ${(end - start).toFixed(4)} ms`);
        
        try {
            start = performance.now();
            countVowels("THIS STRING IS WAY TOO LONG ".repeat(10));
            console.log("Fail");
            end = performance.now();
        } catch (e) {
            end = performance.now();
            console.log("Pass");
        }
        console.log(`Test 7 executed in ${(end - start).toFixed(4)} ms`);
        
    } catch (e) {
        console.error("Test failed: ", e.message);
    }
}

test();
