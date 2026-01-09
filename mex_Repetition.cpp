#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        vector<int> vec(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        vec[n]=INT_MAX;
        vector<int> temp = vec;
        sort(temp.begin(), temp.end());
        int mex = 0;

        for (int i = 0; i < n; i++)
        {
            if (temp[i] == mex)
            {
                mex++;
            }
        }
        vec[n] = mex;
        
        k %= vec.size();
        rotate(vec.begin(), vec.end() - k, vec.end());
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}