#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int v, a, b, c; cin >> v >> a >> b >> c;
    while (1) {
        v -= a;
        if (v < 0) {
            cout << "F" << endl;
            return 0;
        }
        v -= b;
        if (v < 0) {
            cout << "M" << endl;
            return 0;
        }
        v -= c;
        if (v < 0) {
            cout << "T" << endl;
            return 0;
        }
    }
}

