#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    string s; cin >> s;
    map<int, int> mr, ml;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            if (ml.count(y[i])) {
                if (ml[y[i]] < x[i]) ml[y[i]] = x[i];
            } else ml[y[i]] = x[i];
        } else {
            if (mr.count(y[i])) {
                if (mr[y[i]] > x[i]) mr[y[i]] = x[i];
            } else mr[y[i]] = x[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (!mr.count(y[i]) or !ml.count(y[i])) continue;
        if (mr[y[i]] < ml[y[i]]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
