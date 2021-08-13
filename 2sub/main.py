
def p(num) :
    for i in range(2,num) :
        if num % i == 0 :
            return None
    return num

while True :
    m = int(input("M 입력 :"))
    n = int(input("N 입력 :"))

    nums = []
    for i in range(m,n) :
        temps = p(i)
        if not temps == None :
            nums.append(temps)

    sums = 0
    for i in nums :
        sums += i

    print("최소값 : ",nums[0])
    print("합산 : ",sums)
    print("\n\n")




