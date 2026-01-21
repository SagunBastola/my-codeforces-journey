#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    double a=0;
    for(int& x : vec)
    {
        cin>>x;
        a=a+((double)x/100);
    }
    cout<<fixed<<setprecision(6)<<(a*100)/n<<endl;
}