#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    vector<vector<int>> a(9, vector<int>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }
    bool one = true, two = true, three = true;
    for (int i = 0; i < 9; i++) {
        set<int> s;
        for (int j = 0; j < 9; j++) {
            s.insert(a[i][j]);
        }
        if (s.size() < 9) one = false;
    }
    for (int i = 0; i < 9; i++) {
        set<int> s;
        for (int j = 0; j < 9; j++) {
            s.insert(a[j][i]);
        }
        if (s.size() < 9) one = false;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            set<int> s;
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    s.insert(a[3*i + k][3*j + l]);
                }
            }
            if (s.size() < 9) three = false;
        }
    }
    if (one and two and three) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    
    return 0;
}