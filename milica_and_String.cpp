#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int bcnt = 0;
        for (char c : s)
            if (c == 'B') bcnt++;
        if (bcnt == k) {
            cout << 0 << '\n';
            continue;
        }
        cout << 1 << '\n';

        if (bcnt > k) {
            int need = bcnt - k;
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'B') cnt++;
                if (cnt == need) {
                    cout << i + 1 << " A\n";
                    break;
                }
            }
        } else {
            int need = k - bcnt;
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') cnt++;
                if (cnt == need) {
                    cout << i + 1 << " B\n";
                    break;
                }
            }
        }
    }
    return 0;
}
