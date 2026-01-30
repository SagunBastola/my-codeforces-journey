#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size() == 1)
    {
        cout<<1<<endl;
        return 0;
    }
    int a=s.size();
    long long n=0;
    int upp=int(s[0]-'0')+1;
    for(int i=0;i<a;i++)
    {   
        upp=upp*10;
        n=n*10+(s[i]-'0');
    }
    upp=upp/10;
    cout<<upp-n<<endl;
}