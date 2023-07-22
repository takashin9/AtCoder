#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    ll cnt = 0, cntf = 0;
    for (auto x : s) {
        if (x == 'a') {
            if (cnt < a + b) {
                cout << "Yes" << endl;
                cnt++;
            }
            else cout << "No" << endl;
        }
        else if (x == 'b') {
            if (cnt < a + b and cntf < b) {
                cout << "Yes" << endl;
                cnt++;
                cntf++;
            }
            else cout << "No" << endl;
        }
        else cout << "No" << endl;
    }
    
    
    
    return 0;
}