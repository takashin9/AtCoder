#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    vector<int> a(10);
    for (int i = 0; i < 9; i++) {
        a[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] == 0) cout << i << endl;
    }


    return 0;
}
