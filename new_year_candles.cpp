#include <bits/stdc++.h>
using namespace std;
#define rep(i, n, m) for (int i = n; i < m; i++)
#define vi vector<int>
int main()
{   
    int n,k;
    cin>>n>>k;
    int rem=0;
    int sum=0;
    while(n>=1)
    {
        sum += n;
        int total = n + rem;     
        n = total / k;          
        rem = total % k;
    }
    cout<<sum<<endl;
}