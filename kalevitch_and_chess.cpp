#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<string> vec;
    for(int i=0;i<8;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        if(vec[i] == "BBBBBBBB")
        {
            cnt++;
        }
    }
    if(cnt == 8)
    {
        cout<<cnt<<endl;
        return 0;
    }
    for(int i=0;i<8;i++)
    {
        int a=0;
        for(int j=0;j<8;j++)
        {

            if(vec[j][i] == 'B')
            {
                a++;
            }
        }
        if(a == 8)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
}