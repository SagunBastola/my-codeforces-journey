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
        vector<int> vec(n + 1);
        int start=1;
        int end=n;
        for(int i=n;i>0;i--)
        {
            if(i&1)
            {
                vec[i]=start;
                start++;
            }
            else
            {
                vec[i]=end;
                end--;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}