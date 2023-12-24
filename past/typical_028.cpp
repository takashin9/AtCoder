#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int g[1001][1001] = {};
    for (int i = 0; i < n; i++) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        g[lx][ly]++;
        g[lx][ry]--;
        g[rx][ly]--;
        g[rx][ry]++;
    }
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            g[i][j + 1] += g[i][j];
        }
    }
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            g[j + 1][i] += g[j][i];
        }
    }
    int ans[n + 1] = {};
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            ans[g[i][j]]++;
        }
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << endl;
    
    
    
    
    
    return 0;
}