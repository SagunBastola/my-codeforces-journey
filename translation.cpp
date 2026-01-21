#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    int start=0;
    int end=t.size()-1;
    bool ta=true;
    while(start<s.size() && end>=0)
    {
        if(s[start] != t[end])
        {
            ta=false;
            break;
        }
        start++;
        end--;
    }
    if(start < s.size() || end>=0)
    {
        cout<<"NO"<<endl;
    }
    else if(ta)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}