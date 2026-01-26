#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> vec(n);
        for (int &x : vec)
        {
            cin >> x;
        }
        if (n == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll one=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=vec[i];
            if(vec[i] == 1)
            {
                one++;
            }
        }
        if(sum >= one + n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}