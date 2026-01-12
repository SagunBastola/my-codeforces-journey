#include<bits/stdc++.h>
using namespace std;
long long recursive(int n) {
    if (n <= 1) return 1;
    return n * recursive(n - 1);
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long > vec(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int sum=0;
        unordered_map<long long,long long> m;
        for(int i=0;i<n-1;i++)
        {
            m[vec[i+1]-vec[i]]++;
        }
        vector<long long> vec1(n-1);
        for(int i=1;i<n-1;i++)
        {
            if(m.find(i) != m.end())
            {
                vec1[i]=recursive(m[i]);
            }
            else{
                vec1[i]=0;
            }
        }
        for(long long val : vec1)
        {
            cout<<val<<" ";
        }
        cout<<endl;

    }
}