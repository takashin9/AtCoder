#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    vector<int> a(3);
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if (a[2] - a[1] == a[1] - a[0]) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    
    return 0;
}