#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1;
        cin >> n1;
        string s;
        cin >> s;
        int n = s.size();
        if (n1 == 1 || n1 == 2)
        {
            cout << 1 << endl;
            continue;
        }
        if (n1 > 2 && s[0] == '0' && s[1] == '0' && s[2] == '0')
        {
            s[1] = '1';
        }
        if (n1 >= 3 && s[n1 - 1] == '0' && s[n1 - 2] == '0' && s[n1 - 3] == '0')
        {
            s[n1 - 2] = '1';
        }
        int student_cnt = 0;
        for(int i=0;i<n1;i++)
        {
            if (i+4<n&& s[i-1]=='1' && s[i] == '0' && s[i+1] == '0' && s[i+2] == '0' && s[i+3]== '0')
            {
                s[i+2] = '1';
                continue;
            }
        }
        for (int i = 0; i < n1; i++)
        {
            if (s[i] == '1')
            {
                student_cnt++;
                continue;
            }
            if (i+3<n && s[i] == '0' && s[i+1] == '0' && s[i+2] == '0')
            {
                s[i+1] = '1';
                continue;
            }
            bool left = (i == 0 || s[i - 1] == '0');
            bool right = (i == n - 1 || s[i + 1] == '0');
            if (left && right)
            {
                s[i] = '1';
                student_cnt++;
            }
        }

        cout << student_cnt << endl;
    }
    return 0;
}