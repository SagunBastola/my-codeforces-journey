#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll cnt1=(k*l)/nl;
    ll cnt2=p/np;
    ll cnt3=(c*d);
    cout<<min(cnt1,min(cnt2,cnt3))/n<<endl;
}