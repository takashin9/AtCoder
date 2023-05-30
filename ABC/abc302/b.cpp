#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    

    ll dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] != 's') continue;
            for (int k = 0; k < 8; k++) {
                string t = "s";
                vector<pair<ll, ll>> ans(5);
                ans[0] = make_pair(i+1, j+1);
                for (int l = 1; l < 5; l++) {
                    if (i+dy[k]*l >= h or i+dy[k]*l < 0 or j+dx[k]*l >= w or j+dx[k]*l < 0) break;
                    t += s[i+dy[k]*l][j+dx[k]*l];
                    ans[l] = make_pair(i+dy[k]*l+1, j+dx[k]*l+1);
                }
                if (t == "snuke") {
                    for (auto x : ans) {
                        cout << x.first << ' ' << x.second << endl;
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}