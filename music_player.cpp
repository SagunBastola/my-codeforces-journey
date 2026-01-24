#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool on=false;
    int n;
    cin>>n;
    int vol=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            vol++;
        }
        else if(x == 2 && vol>0)
        {
            vol--;
        }
        else if(x==3)
        {
            if(on)
            {
                on=false;
            }
            else
            {
                on=true;
            }
        }
        if(on && vol>=3)
        {
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
}