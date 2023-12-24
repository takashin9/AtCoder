#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i <= 100; i++) {
        if (i % 5 == 0) {
            if (abs(ans - n) > abs(i - n)) ans = i;
        }
    }
    cout << ans << endl;
    
    
    
    return 0;
}