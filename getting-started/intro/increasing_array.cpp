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
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        a[i] = x;
    }
    long long moves = 0, curr_maxi = -LLINF;
    for (int i = 0; i < n; ++i) {
        if (a[i] < curr_maxi) moves += curr_maxi - a[i];
        curr_maxi = max(curr_maxi, a[i]);
    }
    cout << moves << "\n";
    return 0;
}

