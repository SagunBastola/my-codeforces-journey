#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int& x : vec)
    {
        cin>>x;
    }
    int cnt=0;
    int i=0;
    while(i<n)
    {
        int a=vec[i];
        if(a>0)
        {
            vec[i]-=1;
            i=0;
            cnt++;
        }
        else{
            i++;
        }
    }
    cout<<cnt;
}