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
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    set<int> s;
    for (int i = 0; i < n; i++) s.insert(a[i]);
    priority_queue<int> pq;
    for (auto x : s) pq.push(x);
    pq.pop();
    cout << pq.top() << endl;
    
    
    return 0;
}