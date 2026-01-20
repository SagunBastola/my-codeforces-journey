#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int &x : vec)
        {
            cin >> x;
        }
        sort(vec.begin(),vec.end());
        if((vec[0]+vec[n-1])%2 == 0)
        {
            cout<<"0"<<endl;
            continue;
        }
        int left=0,right=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]%2 != vec[0]%2)
            {
                left=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j++)
        {
            if(vec[j]%2 != vec[n-1]%2)
            {
                right=n-1-j;
                break;
            }
        }
        cout<<max(left,right)<<endl;
    }
}