#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int h;
    cin>>n>>h;
    vector<int> vec(n);
    int cnt=0;
    for(int& x : vec)
    {
        cin>>x;
        if(x>h)
        {
            cnt++;
        }
    }
    cout<<n+cnt<<endl;

}