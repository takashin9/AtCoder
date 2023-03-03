#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n;
    cin >> n;
    vector<double> x(5*n);
    for(auto &y : x) cin >> y;

    sort(x.begin(), x.end());

    double ans = 0;

    for(int i = n; i < 4*n; i++) ans += x[i];



    cout << setprecision(15) << fixed;
    cout << ans / (3*n) << endl;
    
    return 0;
}