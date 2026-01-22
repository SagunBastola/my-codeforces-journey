#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<string> names={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
    ll n;
    cin>>n;
    int block=1;
    while(n>5*block)
    {
        n-=5*block;
        block*=2;
    }
    cout<<names[(n-1)/block]<<endl;
}