/*
 * @author corlet1
 */
 
#include <bits/stdc++.h>
using namespace std;
 
const int INF = 1e9;
const long long LLINF = 4e18;
const double EPS = 1e-9;
 
void solve(long long n) {
    long long sum = n * (n + 1) / 2;
    if (sum & 1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    unordered_set<int> a;
    int i = !(n & 1), j = n;
    while (i <= j) {
        if (i > 0)
            a.insert(i);
        a.insert(j);
        j -= 2;
        i += 2;
    }
    unordered_set<int> b;
    for (int i = 1; i <= n; i++)
        if (!a.count(i)) b.insert(i);
    cout << a.size() << "\n";
    for (int x: a)
        cout << x << " ";
    cout << "\n";
    cout << b.size() << "\n";
    for (int x: b)
        cout << x << " ";
    cout << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    solve(n);
    return 0;
}
