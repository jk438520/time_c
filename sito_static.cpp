#include <bits/stdc++.h>

using namespace std;

const unsigned long long k = 1 << 11;
bool isPrime[k];

int main()
{
    vector<unsigned long long> primes;
    for (int i = 2; i < k; i++)
        isPrime[i] = true;
    isPrime[0] = false;
    isPrime[1] = false;
    for (unsigned long long i = 2; i * i <= k; i++)
        if (isPrime[i] == true)
            for (unsigned long long j = 2 * i; j < k; j += i)
                isPrime[j] = false;
    for (unsigned long long i = 2; i < k; i++)
        if (isPrime[i] == true)
            primes.push_back(i);
    return 0;
}