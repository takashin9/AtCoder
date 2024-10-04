#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int fans = 0, sans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                if (i == j) fans++;
                else sans++;
            }
        }
    }
    cout << fans << endl;
    cout << sans << endl;
}
