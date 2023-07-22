#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> w(n);
    set<string> s;
    for (auto &x : w) cin >> x;
    for (int i = 0; i < n-1; i++) {
        if (s.count(w[i])) {
            if (i % 2) {
                cout << "WIN" << endl;
                return 0;
            }
            else {
                cout << "LOSE" << endl;
                return 0;
            }
        }
        if (w[i][w[i].size()-1] != w[i+1][0]) {
            if (i % 2 == 0) {
                cout << "WIN" << endl;
                return 0;
            }
            else {
                cout << "LOSE" << endl;
                return 0;
            }
        }
        s.insert(w[i]);
    }
    cout << "DRAW" << endl;
    
    
    
    return 0;
}