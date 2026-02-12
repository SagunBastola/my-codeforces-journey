#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;
    cout<<min(r,b)<<" ";
    cout<<max(r-min(r,b),b-min(r,b))/2<<endl;
}