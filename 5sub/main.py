import copy as c
strcount = int(input())

inputs = []
for i in range(strcount) :
    temp = input()
    inputs.append(temp)

res = 0
for i in range(len(inputs)) :
    canpass = True
    temp_inputs = c.deepcopy(list(inputs[i]))
    appnended = []
    char = ""
    for j in range(len(temp_inputs)) :
        if char == temp_inputs[j] :
            continue
        else :
            appnended.append(char)
            char =  temp_inputs[j]

        if char in appnended :
            canpass = False
            break
    if canpass :
        res += 1
        

print(res)