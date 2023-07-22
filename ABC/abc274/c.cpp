#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> b(2*n+2);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        b[2*i] = b[a[i]] + 1;
        b[2*i+1] = b[a[i]] + 1;
    }
    for (int k = 1; k <= 2*n+1; k++) cout << b[k] << endl;


    
    
    return 0;
}