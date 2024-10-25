#include <bits/stdc++.h>

using namespace std;


int main() {
    string s; cin >> s;
    int n = ssize(s);
    int ans = 0;
    for (int i = 1; i < n / 2; i++) {
        if (s.substr(0, i) == s.substr(i, i)) {
            ans = max(ans, i);
        }
    }
    cout << 2 * ans << endl;

    return 0;
}
