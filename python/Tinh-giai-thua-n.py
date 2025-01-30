from time import perf_counter
n = int(input())
start = perf_counter()
'''

#Tinh giai thua thuong
def gt(x):
    result = 1
    for i in range (2,x+1):
        result *= i
    return result
print(gt(n))

'''
#-----------------------------------------------------------------------------#
'''

#Tinh giai thua quy hoach dong ( O**n3 )
def gt(x):
    c = [0]*(x+1) #List x ptu = 0
    c[0] = 1
    for i in range (1,x+1):
        #n! = n * (n-1)!
        c[i] = i * c[i-1]
    return c
x = gt(n)
print(x[n])

'''
# Ap dung Hoan vi, Chinh hop, To hop
# Hoan vi = n!
# Chinh hop = n!/(n-k)!     //        A^k/n
# To hop = n!/k!*(n-k)!

end = perf_counter()
print(end - start)