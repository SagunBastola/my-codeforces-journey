#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isPrime(ll input)
{
    if (input <= 1)
        return false; // Numbers less than or equal to 1 are not prime

    for (ll i = 2; i <= sqrt(input); ++i)
    {
        if (input % i == 0)
            return false; // Found a divisor, not prime
    }
    return true; // No divisors found, it's prime
}
int main()
{
    ll n;
    cin >> n;
    while (n > 0)
    {
        cout << n << " " << endl;
        if (isPrime(n))
        {
            cout << 1 << endl;
            return 0;
        }
        if (n == 1)
        {
            return 0;
        }
        for(int i=2 ;i<n;i++)
        {
            if(n%i == 0)
            {
                n=n/i;
                break;
            }
        }
    }
}