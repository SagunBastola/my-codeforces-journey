#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

// Helper to calculate 3^p safely
ll p3(int p) {
    if (p < 0) return 0; // Handle the x-1 case for x=0
    ll res = 1;
    for (int i = 0; i < p; i++) res *= 3;
    return res;
}

void solve() {
    ll n;
    cin >> n;

    ll total_cost = 0;
    int x = 0;

    while (n > 0) {
        ll d = n % 3; // Digit in base-3
        if (d > 0) {
            ll cost_per_deal;
            if (x == 0) {
                cost_per_deal = 3; // Formula: 3^(0+1) + 0 * 3^(-1) = 3
            } else {
                cost_per_deal = p3(x + 1) + x * p3(x - 1);
            }
            total_cost += d * cost_per_deal;
        }
        n /= 3;
        x++;
    }

    cout << total_cost << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}