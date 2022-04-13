from math import sqrt
from math import ceil

k = 1<<11
isPrime = [True]*k
primes = []
isPrime[0] = False
isPrime[1] = False

for i in range(2, (int)(ceil(sqrt(k)))):
    if(isPrime[i]):
        for j in range(2*i, k, i):
            isPrime[j]=False

for i in range(2, k):
    if(isPrime[i]):
        primes.append(i)
