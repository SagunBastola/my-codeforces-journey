#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c;
        cin >> a >> b >> c;
        float mi = min(a, b);
        float ma = max(a, b);
        float diff = ((ma - mi) / (2.00 * c));
        int d=ceil(diff);
        cout << d << endl;
    }
}