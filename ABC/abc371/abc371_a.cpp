#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;


int main() {
    char ab, ac, bc; cin >> ab >> ac >> bc;
    int a, b, c; a = b = c = 0;
    if (ab == '<') b++;
    else a++;
    if (ac == '<') c++;
    else a++;
    if (bc == '<') c++;
    else b++;

    if (a == 1) cout << "A" << endl;
    else if (b == 1) cout << "B" << endl;
    else if (c == 1) cout << "C" << endl;    
    
    return 0;
}
