#include<bits/stdc++.h>
using namespace std;
int main()
{
    string start,end;
    cin>>start>>end;
    int x=start[0]-'a';
    int y=start[1]-'a';
    int x1=end[0]-'a';
    int y1=end[1]-'a';
    vector<string> result;
    while(x != x1 || y!=y1)
    {
        string r="";
        if(x < x1)
        {
            r+='R';
            x++;
        }
        else if(x > x1)
        {
            r+='L';
            x--;
        }
        if(y< y1)
        {
            r+='U';
            y++;
        }
        else if(y>y1)
        {
            r+='D';
            y--;
        }
        result.push_back(r);
    }
    cout<<result.size()<<endl;
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
}