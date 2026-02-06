#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int datcnt=0;
        int sum=0;
        int cnt=0;
        int threeday=a+b+c;
        datcnt=(n/threeday) *3;
        sum=0;
        n=n%threeday;
        while(n>sum)
        {
            datcnt++;
            if(cnt == 0)
            {
                sum+=a;
                cnt++;
            }
            else if(cnt == 1)
            {
                sum+=b;
                cnt++;
            }
            else if(cnt == 2)
            {
                cnt++;
                sum+=c;
                cnt=0;          
            }
        }
        cout<<datcnt<<endl;
    }
}