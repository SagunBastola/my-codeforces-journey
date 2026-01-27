#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,a,b;
        cin>>w>>h>>a>>b;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1+2*a <= x2)
        {
            if(y1 == y2)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
        }
        else if(y1+2*b <= y2){
            if(x1 == x2)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}