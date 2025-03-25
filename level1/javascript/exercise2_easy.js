// Дівчина Оля полюбляє гарно одягатися. Коли вона вдягає підбори з капелюхом, то її зріст становить a см. 
// Коли вона надягає тільки капелюх, то стає ростом b см, 
// а коли тільки підбори - c см. Який насправді зріст у Олі?
// ВВІД: Ввести три числа a, b та c, які будуть означати зріст Олі в капелюсі та підборах,
//  зріст Олі тільки в капелюсі та зріст Олі тільки на підборах відповідно. 
// ВИВІД: Єдине число, яке означатиме дійсний зріст Олі

function getActualHeight(a, b, c) {
    
}

function test() {
    try {
        let start, end;
        
        start = performance.now();
        console.log(getActualHeight(180, 170, 175) === 165 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 1 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(getActualHeight(190, 180, 185) === 175 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 2 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(getActualHeight(200, 195, 198) === 193 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 3 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(getActualHeight(175, 165, 170) === 160 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 4 executed in ${(end - start).toFixed(4)} ms`);
        
        start = performance.now();
        console.log(getActualHeight(160, 150, 155) === 145 ? "Pass" : "Fail");
        end = performance.now();
        console.log(`Test 5 executed in ${(end - start).toFixed(4)} ms`);
        
        try {
            start = performance.now();
            getActualHeight(201, 190, 195);
            console.log("Fail");
            end = performance.now();
        } catch (e) {
            end = performance.now();
            console.log("Pass");
        }
        console.log(`Test 6 executed in ${(end - start).toFixed(4)} ms`);
        
    } catch (e) {
        console.error("Test failed: ", e.message);
    }
}

test();
