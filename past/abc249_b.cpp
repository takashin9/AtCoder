#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    int n = size(s);
    set<int> st;
    for (auto c : s) st.insert(c);
    bool cap = false, small = false;
    for (auto c : s) {
        if ('a' <= c and c <= 'z') small = true;
        if ('A' <= c and c <= 'Z') cap = true;
    }

    if (st.size() == n and cap and small) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
