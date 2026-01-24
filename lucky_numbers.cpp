#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isLucky(long long x)
{
    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
            return false;
        x /= 10;
    }
    return true;
}

long long nextLucky(long long n)
{
    long long candidate = n;
    while (true)
    {
        if (isLucky(candidate))
        {
            return candidate;
        }
        candidate++;
    }
}
int main()
{
    long long l, r;
    cin >> l >> r;
    long long sum = 0;
    long long recentLucky=4;
    for (int i = l; i <= r; i++)
    {

        if (i <= recentLucky)
        {
            
            sum += recentLucky;
        }
        else{
            recentLucky = nextLucky(i);
            sum += recentLucky;
        }
    }
    cout << sum << endl;
}