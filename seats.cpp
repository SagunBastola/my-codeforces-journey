#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1;
        cin>>n1;
        string s;
        cin >> s;
        int n = s.size();
        if(n==1 || n==2 )
        {
            cout<<1<<endl;
            continue;
        }
        if(n>2 && s[0] == '0' && s[1] == '0' && s[2] == '0')
        {
            s[1]='1';
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(i== 0 && s[i+1] == '0')
            {
                s[i]='1';
            }
            if(i == n-1 && s[i-1] == '0')
            {
                s[i]='1';
            }
            if (s[i - 1] == '0' && s[i + 1] == '0')
            {
                s[i] = '1';
            }
        }

        int student_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                student_cnt++;
            }
        }
        cout << student_cnt << endl;
    }
    return 0;
}