#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a, b, c, x; cin >> a >> b >> c >> x;
    cout << setprecision(10) << fixed;
    if (x <= a) cout << 1 << endl;
    else if (a < x and x <= b) cout << (double)c / (b - a) << endl;
    else cout << 0 << endl;
}

