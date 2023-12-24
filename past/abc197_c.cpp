#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    int ans = INT_MAX;

    for (int i = 0; i < (1 << n); i++) {
        int ord = 0;
        int xord = 0;
        for (int j = 0; j <= n; j++) {
            if (j < n) ord |= a[j];
            if (i & (1 << j) or j == n) {
                xord ^= ord;
                ord = 0;
            }
        }
        ans = min(ans, xord);
    }
    cout << ans << endl;
    
    
    
    return 0;
}