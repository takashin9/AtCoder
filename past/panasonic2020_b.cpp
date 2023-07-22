#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll h, w;
    cin >> h >> w;
    if (h == 1 or w == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (h % 2 and w % 2) cout << h*w/2 + 1 << endl;
    else cout << h*w/2 << endl;
    
    
    
    return 0;
}