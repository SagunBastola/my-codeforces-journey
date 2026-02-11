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
        vector<int> p(n);
        for(int& pp: p)
        {
            cin>>pp;
        }
        for(int& aa : a)
        {
            cin>>aa;
        }
        vector<int> seq;
        for(int i=0;i<n;i++)
        {
            seq.push_back(a[i]);
            int ab=a[i];
            while(i<a.size() && ab == a[i])
            {
                i++;
            }
            i--;
        }
        int idx=0;
        int j=0;
        while(j<seq.size() && idx < p.size())
        {
            while(seq[j] == p[idx])
            {
                j++;
            }
            idx++;
        }
        if(j>=seq.size())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}