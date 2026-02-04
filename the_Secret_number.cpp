#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool t=false;
        for(int i=1;i<s.size();i++)
        {
            if(s[i] != s[i-1])
            {
                t=true;
            }
        }   
        if(t)
        {
            cout<<"0"<<endl;
            continue;
        }
        int cnt=0;
        vector<string> vec;
        if(s.size()%2 == 0)
        {
            string a="";
            for(int i=0;i<s.size()/2;i++)
            {
                a+=s[i];
            }
            vec.push_back(a);
        }
        cout<<vec[0]<<endl;
    }
}