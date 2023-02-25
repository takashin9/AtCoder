#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {

    ll n, k;
    string s;
    cin >> n >> k >> s;

    ll cntx = 0, cntyy = 0, cntyxy = 0;

    for(auto x : s){
        if(x == 'X') cntx++;
    }

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == 'Y' and s[i+1] == 'Y') cntyy++;
    }

    for(int i = 0; i < s.size() - 2; i++){
        if(s[i] == 'Y' and s[i+1] == 'X' and s[i+2] == 'Y') cntyxy++;
    }



    if(k <= cntx){
        
    }
    
    return 0;
}