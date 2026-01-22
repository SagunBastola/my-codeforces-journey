#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(3);
    vector<int> b(3);
    for (int &x : a)
    {
        cin >> x;
    }
    for (int &x : b)
    {
        cin >> x;
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += abs(a[i] - b[i]);
    }
    if (sum == 3)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
}