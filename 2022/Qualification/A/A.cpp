#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TestInput.txt", "r", stdin);
    freopen("TestOutput.txt", "w", stdout);
    int t; cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n, k; cin >> n >> k;
        map<int, int> M;
        bool br = false;
        for (int i = 0; i < n; i++) {
            int x; cin >> x; M[x]++;
            if (M[x] >= 3) br = true;
        }
        if (br || 2*k < n) cout << "Case #" << tt << ": " << "NO\n";
        else cout << "Case #" << tt << ": " << "YES\n";
    }
}
