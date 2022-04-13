#include <iostream>
#include <vector>

using namespace std;

const unsigned long long k = 1 << 28;

int main()
{ 
    vector<bool> isPrime(k, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (unsigned long long i = 2; i * i <= k; i++)
        if (isPrime[i] == true)
            for (unsigned long long j = 2 * i; j < k; j += i)
                isPrime[j] = false;
    for (unsigned long long i=2; i<k; i++)
        if (isPrime[i]==true)
            
    return 0;
}