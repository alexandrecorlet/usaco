/*
 * @author corlet1
 */

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const long long LLINF = 4e18;
const double EPS = 1e-9;

int main() {
    int n;
    scanf("%d", &n);
    vector<bool> seen(n + 10, false);
    for (int i = 0; i < n - 1; ++i) {
        int num;
        scanf("%d", &num);
        seen[num] = true;
    }
    for (int num = 1; num <= n; ++num)
        if (!seen[num]) printf("%d", num);
    return 0;
}

