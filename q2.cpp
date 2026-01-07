#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        int threshold = k-1;
        int mex = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && vec[i] == vec[i - 1])
            {
                continue;
            }
            else if(vec[i] == mex)
            {
                mex++;
            }
            else if(vec[i] > mex)
            {
                break;
            }
        }
        cout << min(mex,threshold) << endl;
    }
}