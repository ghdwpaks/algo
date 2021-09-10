import random as r
import numpy as n
from numpy.ma.core import count
import copy as c
a = []
odd = 0
even = 0
for i in range(5) :
    a.append([])
    for j in range(20) :
        a[i].append(r.randint(10,50))
        if a[i][j] % 2 == 0 :
            even += a[i][j]
        else :
            odd += a[i][j]

print("홀수 총합 :",odd)
print("짝수 총합 :",even)

a[0][19] , a[2][9] = a[2][9] , a[0][19]

#print("n.min(a, axis=1) :",n.max(n.max(a, axis=1)))

kinds = []

for e in a: kinds += e
a = c.deepcopy(kinds)
kinds = list(set(kinds))
kinds.sort()

print("kinds :",kinds)
print("len(kinds) :",len(kinds))

counts = []
for i in range(len(kinds)) : counts.append(a.count(kinds[i]))

print("가장 많이 나온 수는",kinds[counts.index(n.max(counts))])
#                           의 k위치    많이 나온수갯수
#for i in range()

