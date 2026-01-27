#include <iostream>
#include <vector>
//copied
using namespace std;
typedef unsigned long long ull;

void solve() {
    ull n, c;
    cin >> n >> c;
    vector<ull> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    ull low = 1; ull high = 1e19; 
    ull ans = 0;

    while (low <= high) {
        ull mid = low + (high - low) / 2;
        ull total_area = 0;
        bool too_big = false;

        for (int i = 0; i < n; i++) {
            ull side = s[i] + mid;
            
            // Check for multiplication overflow or total sum overflow
            if (side > 2e9 || (side * side) > c) { 
                too_big = true;
                break;
            }
            
            total_area += (side * side);
            if (total_area > c) {
                too_big = true;
                break;
            }
        }

        if (total_area == c) {
            ans = mid;
            break;
        } else if (too_big || total_area > c) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans/2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}