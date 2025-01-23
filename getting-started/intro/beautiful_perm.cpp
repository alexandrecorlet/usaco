/*
 * @author corlet1
 */

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const long long LLINF = 4e18;
const double EPS = 1e-9;

void solve(int n) {
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return;
    }
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    for (int i = 1 ; i <= n; i += 2) cout << i << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve(n);
    return 0;
}

