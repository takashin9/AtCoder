#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    uint64_t n;
    cin >> n;
    vector<bool> isPrime(1 << 20, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int p = 2; p < (1 << 20); p++) {
        if (!isPrime[p]) continue;
        for (int q = 2*p; q < (1 << 20); q += p) {
            isPrime[q] = false;
        }
    }
    uint64_t ans = 0;
    for (uint64_t q = 2; q < (1 << 20); q++) {
        if (!isPrime[q]) continue;
        uint64_t pmax = min(q, n / (q*q*q));
        for (uint64_t p = 2; p <= pmax; p++) {
            if (p < q and isPrime[p]) ans++;
        }
    }
    cout << ans << endl;
    
    
    
    
    return 0;
}