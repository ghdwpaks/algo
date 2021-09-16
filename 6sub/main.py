r = 0
b = 0
g = 0

p = False
while True :
    r = round(r,2)
    if r > 13 :
        break
    
    b = 8 - r
    g = 13 - r

    if (g - r) == 6 and (g+r) == 13 :
        p = True
        break
    
    r += 0.01

if p :
    print("빨강은",r)
    print("파랑은",b)
    print("초록은",g)
    