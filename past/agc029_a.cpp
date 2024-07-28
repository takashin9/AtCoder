#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    int n = s.size();
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'B' and s[i + 1] == 'W') {
            ans += i + 1 - cnt;
            cnt++;
        }
    }
    cout << ans << endl;
    
    
    
    return 0;
}