from time import perf_counter
n = int(input())
start = perf_counter()
"""
# 6k+-1
# Time = 0,2s
def snt(x):
    if x <= 3: return x > 1  #Loc ra so 2 va 3
    if x % 2 == 0 or x % 3 == 0: return False  #Loc ra so 4
    i = 5
    while i < int(x**0.5):
        if x % i == 0 or x % (i + 2) == 0: return False
        i += 6
    return True

for i in range (n):
    if snt(i):
        print(i)
# Hieu qua ( O**n5 )

"""
#------------------------------------------------------------------------------#
"""
# San so nguyen to ( O**n6 )
# Time = 0.8s
def snt(x):
    c = []
    p = [True]*x
    for i in range (2,x):
        for j in range (i*i,x,i):
            p[j] = False
    for i in range (2,x):
        if p[i]: c.append(i)
    return c

result = []
print(snt(n))

"""
end = perf_counter()
print(end - start)