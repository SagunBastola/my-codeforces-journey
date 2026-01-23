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
        vector<int> ans(n);
        int m = n;
        unordered_set<int> st;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        int cnt=0;
        while (m & (m - 1) != 0)
        {   
            cnt++;
            m = m >> 1;
        }
        m=1;
        m=m<<cnt;
        ans[n - 1] = m;
        st.erase(m);
        for (int i = 1; i < n - 1; i++)
        {
            ans[i] = (i+1) ^ m;
            st.erase(ans[i]);
        }
        for (int sss : st)
        {
            ans[0] = sss;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}