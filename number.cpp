#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum=0;
    long long int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        int m=n;
        while(m>=i)
        {
            sum+=m%i;
            m=m/i;

        }
        sum+=m;
    }
    cout<<sum<<"/"<<n-2<<endl;
}