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
        int max1=INT_MIN;
        for(int& x : vec)
        {
            cin>>x;
            max1=max(max1,x);
        }
        cout<<max1*n<<endl;
    }
}