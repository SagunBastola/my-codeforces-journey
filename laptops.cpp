#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
int main()
{
        int n;
        cin>>n;
        vector<pi> vec(n);
        bool ta=false;
        rep(i,0,n)
        {
            int a,b;
            cin>>a>>b;
            vec[i]={a,b};
        }
        sort(vec.begin(),vec.end());
        rep(i,1,n)
        {
            if(vec[i-1].second > vec[i].second)
            {
                cout<<"Happy Alex";
                ta=true;
                break;
            }
            else{
                ta=false;
            }
        }
        if(ta)
        {
            
        }
        else{
            cout<<"Poor Alex";
        }
    
}