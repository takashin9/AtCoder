#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll cnt = 0, m = n;
        while (n > 0) {
            cnt += n % 3;
            m -= n % 3;
            n /= 3;
        }

        if (cnt == k) cout << "Yes" << endl;
        else if (cnt > k) cout << "No" << endl;
        else {
            if ((k - cnt) % 2 == 0 and (k - cnt) <= m) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    
    
    
    return 0;
}