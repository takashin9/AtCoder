#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    
    map<string, int> m;
    
    m["tourist"] = 3858;
    m["ksun48"] = 3679;
    m["Benq"] = 3658;
    m["Um_nik"] = 3648;
    m["apiad"]  = 3638;
    m["Stonefeang"] = 3630;
    m["ecnerwala"] = 3613;
    m["mnbvmar"] = 3555;
    m["newbiedmy"] = 3516;
    m["semiexp"] = 3481;
    string s;
    cin >> s;
    cout << m[s] << endl;
    
    
    return 0;
}