a = int(input())
temp = 0
count = 0
c = []
for i in range(a):
    b = input()
    c.append(b[0])
    for j in range(1,len(b)):
        for l in range(len(c)):
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