#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; string s; cin >> n >> s;
    for (int i = 0; i < n - 1; i++) {
        int ans = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j] == s[j + i + 1]) break;
            ans = j + 1;
        }
        cout << ans << endl;
    }
    
    
    
    return 0;
}