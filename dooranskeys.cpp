#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<char> key;
        string s;
        cin>>s;
        bool found=true;
        for(long long int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                key.insert(s[i]);
            }
            else if(isupper(s[i]))
            {
                if(key.find(tolower(s[i])) != key.end())
                {
                    found=true;
                    key.erase(tolower(s[i]));
                }
                else{
                    found=false;
                    break;
                }
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}