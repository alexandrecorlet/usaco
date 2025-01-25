/*
 * @author corlet1
 */

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const long long LLINF = 4e18;
const double EPS = 1e-9;
const long long MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; ++i) 
        ans = (ans % MOD) * 2LL;
    ans %= MOD;
    cout << ans;
    return 0;
}

