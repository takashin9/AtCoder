#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll b, c;
    cin >> b >> c;
    if (b == 0) {
        if (c <= 1) cout << 1 << endl;
        else cout << c << endl;
    }
    else {
        if (c >= abs(b) * 2) {
            if (c % 2) {
                cout << c - 1 + 2 * abs(b) << endl;
            }
            else cout << c + 2 * abs(b) << endl;
        }
        else cout << c + 1 << endl;

        
    }
    
    
    
    return 0;
}