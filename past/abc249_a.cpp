#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a, b, c, d, e, f, x; cin >> a >> b >> c >> d >> e >> f >> x;
    int j = (x / (a + c) + (min(a, x % (a + c)))) * b - (x / (d + f) + (min(d, x % (d + f)))) * e;
    if (j > 0) {
        cout << "Takahashi" << endl;
    } else if (j == 0) {
        cout << "Draw" << endl;
    } else {
        cout << "Aoki" << endl;
    }


    return 0;
}
