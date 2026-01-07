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
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(int i=0;i<n;i++)
        {
            if(vec[i] == 0)
            {
                zero++;
            }
            else{
                one++;
            }
        }
        if(one>= zero)
        {
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }

    }
}