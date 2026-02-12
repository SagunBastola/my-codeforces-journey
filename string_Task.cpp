#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<char> s;
    s.insert('a');
    s.insert('e');
    s.insert('i');
    s.insert('o');
    s.insert('u');
    s.insert('y');
    string st;
    cin>>st;
    for (int i = 0; st[i] != '\0'; i++) {
        st[i] = tolower(st[i]);
    }
    string result="";
    for(int i=0;i<st.size();i++)
    {
        if((s.find(st[i]) == s.end()))
        {
            result=result+'.'+st[i];
        }
    }
    cout<<result<<endl;
}