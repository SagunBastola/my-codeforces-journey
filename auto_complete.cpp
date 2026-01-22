#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a.find(s) < a.size())
        {
            v.push_back(a);
        }
    }
    if (v.size() == 0)
    {
        cout << s << endl;
        return 0;
    }
    string result = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        result = min(result, v[i]);
    }
    if(result.find(s) != 0)
    {
        result=min(result,s);
    }
    cout << result << endl;
}