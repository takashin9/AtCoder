#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    ll m = min(a, min(b, min(c, d)));

    if(a and b and c and d){
        a -= m, b -= m, c -= m, d -= m;
        if(abs(b - c) <= 1){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
        return 0;
    }
    else{
        if(a == 0 or d == 0){
            if(abs(b - c) <= 1){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
            return 0;
        }
        else{
            if(b == 1 or c == 1){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
            return 0;
        }
    }

    

    

    
    return 0;
}