#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        const string a = "Timur";
        int a1 = 5;
        if (a1 != n)
        {
            cout << "NO" << endl;
            continue;
        }
        unordered_set<char> se = {'T', 'i', 'm', 'u', 'r'};
        bool t=true;
        for (int i = 0; i < n; i++)
        {
            if (se.find(s[i]) != se.end())
            {
                se.erase(s[i]);
            }
            else{
                t=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(t)
        {
            cout<<"YES"<<endl;
        }
    }
}