#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int threshold = 9;
        for (int i = 0; i < s.size(); i++)
        {
            int j = i;
            int curi = s[i];
            int curr = i;
            while (j < s.size() && (s[j] - '0') >= threshold)
            {
                if (s[j] <= curi)
                {
                    curi = s[j];
                    curr = j;
                }
                j++;
            }
            swap(s[i], s[curr]);
            threshold--;
        }
        cout << s << endl;
    }
}