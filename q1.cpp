#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        long long int zero=0;
        long long int one=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        if(vec[0] == 1 || vec[n-1] == 1)
        {
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }

    }
}