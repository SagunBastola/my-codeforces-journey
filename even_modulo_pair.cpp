#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
 
        sort(a.begin(), a.end());
 
        bool found = false;
 
        for (int i = 0; i < n; i++) {
            long long x = a[i];
            for (int j = i + 1; j < n; j++) {
                long long y = a[j];
                if ((y % x) % 2 == 0) {
                    cout << x << " " << y << "\n";
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
 
        if (!found) cout << -1 << "\n";
    }
 
    return 0;
}