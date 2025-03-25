# Дівчина Оля полюбляє гарно одягатися. Коли вона вдягає підбори з капелюхом, то її зріст становить a см. 
# Коли вона надягає тільки капелюх, то стає ростом b см, 
# а коли тільки підбори - c см. Який насправді зріст у Олі?
# ВВІД: Ввести три числа a, b та c, які будуть означати зріст Олі в капелюсі та підборах,
#  зріст Олі тільки в капелюсі та зріст Олі тільки на підборах відповідно. 
# ВИВІД: Єдине число, яке означатиме дійсний зріст Олі


# def get_actual_height(a, b, c):


import time
def test():
    try:
        start = time.perf_counter()
        print("Pass" if get_actual_height(180, 170, 175) == 165 else "Fail")
        end = time.perf_counter()
        print(f"Test 1 executed in {(end - start) * 1000:.4f} ms")
        
        start = time.perf_counter()
        print("Pass" if get_actual_height(190, 180, 185) == 175 else "Fail")
        end = time.perf_counter()
        print(f"Test 2 executed in {(end - start) * 1000:.4f} ms")
        
        start = time.perf_counter()
        print("Pass" if get_actual_height(200, 195, 198) == 193 else "Fail")
        end = time.perf_counter()
        print(f"Test 3 executed in {(end - start) * 1000:.4f} ms")
        
        start = time.perf_counter()
        print("Pass" if get_actual_height(175, 165, 170) == 160 else "Fail")
        end = time.perf_counter()
        print(f"Test 4 executed in {(end - start) * 1000:.4f} ms")
        
        start = time.perf_counter()
        print("Pass" if get_actual_height(160, 150, 155) == 145 else "Fail")
        end = time.perf_counter()
        print(f"Test 5 executed in {(end - start) * 1000:.4f} ms")
        
        try:
            start = time.perf_counter()
            get_actual_height(201, 190, 195)
            print("Fail")
            end = time.perf_counter()
        except ValueError:
            end = time.perf_counter()
            print("Pass")
        print(f"Test 6 executed in {(end - start) * 1000:.4f} ms")

    except Exception as e:
        print("Test failed:", e)

test()
