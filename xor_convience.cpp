#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> st;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        vector<int> ans(n);
        ans[n - 1] = n;
        st.erase(n);
        for (int i = 1; i < n - 1; i++)
        {
            ans[i] = (n) ^ (i + 1);
            while (ans[i] > n)
            {
                ans[i] = ans[i] - n;
            }
            st.erase(ans[i]);
        }
        for (int a : st)
        {
            ans[0] = a;
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}