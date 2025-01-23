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
    string dna;
    cin >> dna;
    int repetitions = 1, temp = 1;
    for (int i = 1; i < dna.size(); ++i) {
        if (dna[i - 1] == dna[i]) ++temp;
        else {
            repetitions = max(repetitions, temp);
            temp = 1;
        }
    }
    cout << max(repetitions, temp) << "\n";;
    return 0;
}

