#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string num;
    cin >> n >> num;
    if(n<=3)
    {
        cout<<num<<endl;
        return 0;
    }
    if (!(n & 1))
    {
        string result="";
        for (int i = 0; i < n; i++)
        {
            result=result+num[i];
            if(i!= n-1 && i&1)
            {
                result=result+'-';
            }
        }
        cout<<result;
        return 0;
    }
    string result="";
    for(int i=0;i<n-3;i++)
    {
        result=result+num[i];
        if(i&1)
        {
            result=result+'-';
        }
    }
    for(int i=n-3;i<n;i++)
    {
        result=result+num[i];
    }
    cout<<result<<endl;
    return 0;
}