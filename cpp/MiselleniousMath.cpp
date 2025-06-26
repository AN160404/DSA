#include <iostream>
#include <vector>
using namespace std;

// Sieve of Erathosthenes
int main()
{
    int n = 50;
    int ans = 0;
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            ans++;
            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    cout << ans;
    return 0;
}