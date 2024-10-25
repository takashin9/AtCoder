#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    long long n = ssize(s) + 1;
    vector g(n, vector<long long>(0));
    vector<long long> h(n);
    for (long long i = 0; i < n - 1; i++) {
        if (s[i] == '<') {
            g[i].push_back(i + 1);
            h[i + 1]++;
        }
        else {
            g[i + 1].push_back(i);
            h[i]++;
        }
    }
    queue<long long> q;
    vector<long long> a(n, -1);
    for (long long i = 0; i < n; i++) {
        if (h[i] == 0) {
            q.push(i);
            a[i] = 0;
        }
    }
    while (q.size()) {
        long long p = q.front(); q.pop();
        for (long long v : g[p]) {
            a[v] = max(a[v], a[p] + 1);
            q.push(v);   
        }
    }
    cout << accumulate(begin(a), end(a), 0LL) << endl;
} 
