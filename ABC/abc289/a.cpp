#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    string s;
    cin >> s;

    for(auto &x:s){
        if(x == '0') x = '1';
        else x = '0';
    }
    
    cout << s << endl;
    return 0;
}