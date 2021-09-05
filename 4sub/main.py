input_str_len = int(input())
input_str = input()

input_str = list(input_str)
for i in range(input_str_len//2) :
    pass
    temp = str(input_str[0])+str(input_str[1])+str(input_str[2])
    del input_str[:3]
    input_str.insert(0,eval(temp))
res = input_str[0]
print(res,end="")

    

