#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    string n;
    cin >> n;

    for(int i = 0; i < n.size(); i++){
        if(n[i] >= 'A' and n[i] <= 'Z'){
            cout << i+1 << endl;
            return 0;
        }
    }
    
    return 0;
}