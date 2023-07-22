#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    int n;
    string s;
    cin >> n >> s;
    int l = 0, r = n-1;
    int cntl = 0, cntr = 0;
    for (int i = 0; i < n; i++) {
        if (cntl == 0 and s[i] == '(') {
            l = i;
            cntl++;
            continue;
        }
        if (s[i] == '(') cntl++;
        if (cntl > 0 and s[i] == ')') {
            cntr++;
            if (cntl == cntr) r = i;
        }
    }
    if (cntl != cntr) 
    for (int i = 0; i < n; i++) {
        if (i < l or r < i) cout << s[i];
    }
    cout << endl;
    
    
    return 0;
}