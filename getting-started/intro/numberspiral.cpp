/*
 * @author corlet1
 */

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const long long LLINF = 4e18;
const double EPS = 1e-9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long maxi = max(x, y);
        long long ans = maxi * maxi;
        if (maxi & 1) {
            // start coord is (1, maxi)
            long long delta = x - 1 + maxi - y;
            ans -= delta;
        } else {
            // start coord is (maxi, 1)
            long long delta = maxi - x + y - 1;
            ans -= delta;
        }
        cout << ans << "\n";
    }
    return 0;
}

