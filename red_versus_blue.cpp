#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,r,b;
        cin>>n>>r>>b;
        int gap=round((float)r/((float)b+1.0));
        cout<<"R";
        r--;
        int cnt=1;
        for(int i=1;i<n;i++)
        {
            if(cnt != gap)
            {
                if(r>0)
                {
                    r--;
                    cnt++;
                    cout<<"R";
                }
                else if(b>0){
                    cout<<"B";
                    b--;
                    cnt=0;
                }
            }
            else{
                
                if(b>0)
                {
                    b--; 
                    cnt=0;   
                    cout<<"B";
                }
                else if(r>0){
                    r--;
                    cnt++;
                    cout<<"R";

                }
            }
        }
        cout<<endl;
    }
}