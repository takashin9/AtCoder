#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    cin >> n;
    priority_queue<pair<int, string>> pq;
    for (int i = 0; i < n; i++) {
        string s;
        int t;
        cin >> s >> t;
        pq.push({t, s});
    }
    pq.pop();
    cout << pq.top().second << endl;

    
    
    return 0;
}