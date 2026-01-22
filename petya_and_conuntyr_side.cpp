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
    if(n== 1)
    {
        cout<<1<<endl;
        return 0;
    }
    int start=0;
    int end=n-1;
    int maxwater=0;
    while(start<end)
    {
        int lower=min(vec[start],vec[end]);
        maxwater=max(maxwater,lower *(end-start-1));
        if(vec[start] == lower)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout<<maxwater<<endl;
}