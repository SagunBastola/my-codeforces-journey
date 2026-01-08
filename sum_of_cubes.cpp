#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        int a = 0;
        long long int m;
        for (int i = 1; i * i * i < x; i++)
        {
            m = round(cbrt(x - i * i * i));
            if (m>=1 && m * m * m == x - i * i * i)
            {
                a = 1;
                break;
            }
        }
        if(a)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}