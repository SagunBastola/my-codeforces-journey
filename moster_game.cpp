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
        vector<int> a(n);
        vector<int> b(n);
        int min2=INT_MAX;
        for(int& x : a)
        {
            cin>>x;
            min2=min(min2,x);
        }
        int min1=INT_MAX;
        for(int& y : b)
        {
            cin>>y;
            min1=min(min1,y);
        }
        int score=0;
        int idx=0;
        if(min1 < min2)
        {
            cout<<(1ll)*min2*(1ll)*n<<endl;
            continue;
        }
        int level=0;
        for(int i=0;i<n && idx<n;i++,idx++)
        {
            if(a[idx] <= min1)
            {
                continue;
            }
            else{
                level++;
            }
        }
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            if(b[i] <= min1 && i<n-1)
            {
                min1=a[i+1]-1;
            }
        }
        long long score1=(1ll)*(min1)*(1ll)*level;
        cout<<score1<<endl;
    }
}