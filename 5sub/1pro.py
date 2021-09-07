a = int(input())
temp = 0
count = 0
c = []
for i in range(a):
    b = input()
    print("i : {}, b : {}".format(i,b))
    c.append(b[0])
    print("i : {}, c : {}".format(i,c))
    print("len(b) :",len(b))
    print("len(c) :",len(c))
    print("b :",b)
    for j in range(1,len(b)):
        print("c :",c)
        print("j :",j)
        for l in range(len(c)):
            print("l :",l)
            print("\tc[{}] : {}".format(l,c[l]))
            print("\tb[{}] : {}".format(j,b[j]))
            print("\tc[{}] == b[{}] : {}".format(l,j,c[l] == b[j]))

            print()

            print("\tc[len(c) -1] :",c[len(c) -1])
            print("\tc[len(c) -1] != b[j] :",c[len(c) -1] != b[j])
            if c[l] == b[j] and c[len(c) -1] != b[j]:
                temp = -1
                break
            elif c[len(c) -1] != b[j]:
                c.append(b[j])
    if temp != -1:
        count += 1
    c=[]
    temp = 0
print(count)