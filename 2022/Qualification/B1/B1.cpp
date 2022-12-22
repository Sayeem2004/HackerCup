#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TestInput.txt", "r", stdin);
    freopen("TestOutput.txt", "w", stdout);
    int t; cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n, m; cin >> n >> m;
        vector<vector<char>> G(n, vector<char>(m));
        bool fnd = false;
        for (vector<char> &r : G) {
            for (char &c : r) {
                cin >> c;
                if (c == '^') fnd = true;
            }
        }
        if (!fnd) {
            cout << "Case #" << tt << ": " << "Possible\n";
            for (vector<char> &r : G) {
                for (char &c : r) {
                    cout << c;
                }
                cout << '\n';
            }
        } else if (fnd && (n == 1 || m == 1)){
            cout << "Case #" << tt << ": " << "Impossible\n";
        } else {
            cout << "Case #" << tt << ": " << "Possible\n";
            for (int i = 0; i < n; i++) {
                for (int q = 0; q < m; q++) {
                    cout << "^";
                }
                cout << "\n";
            }
        }
    }
}
