#include<bits/stdc++.h>
typedef long long ll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a;
    cin>>a;
    vector<int> b;
    while(cin>>a)
    {
        b.push_back(a);
    }
    REP(i,0,10)
    {
        cout<<i<<endl;
    }
    cout<<a;
}  