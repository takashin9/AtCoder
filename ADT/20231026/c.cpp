#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; string t; cin >> n >> t;
    int dir = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'R') dir = (dir + 1) % 4;
        if (t[i] == 'S') {
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x << ' ' << y << endl;
    
    
    
    return 0;
}