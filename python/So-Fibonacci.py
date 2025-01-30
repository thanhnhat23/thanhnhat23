'''
#So Fibonacci
C1:
f[1] = f[2] = 1
f[n] = f[n-1] + f[n-2]
C2:
f[0] = 0, f[1] = 1
f[n] = f[n-1] + f[n-2]

'''
#-----------------------------------------------------------------------------#
from time import perf_counter
n = int(input())
start = perf_counter()
'''

#Tim so Fibonacci thuong
# O**n5
def Fibonacci(n):
    f = [0]*(n+1)
    f[1] = 1
    for i in range (2,n+1):
        f[i] = f[i-1] + f[i-2]
    return f
x = Fibonacci(n)
print(x[n])

'''
#-----------------------------------------------------------------------------#
'''

#Cong thuc Binet
def Fibonacci(n):
    trung_gian = 5 ** 0.5
    cong_thuc = (1/trung_gian) * (((1+trung_gian)/2)**n - ((1-trung_gian)/2)**n)
    return cong_thuc
x = Fibonacci(n)
print(int(x))

'''

end = perf_counter()
print(end - start)