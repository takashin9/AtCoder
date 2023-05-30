#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;

unsigned long long modPow(unsigned long long a, unsigned long long n, unsigned long long p) {
  if (n == 0) return 1ull;
  if (n == 1) return a % p;
  if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p;
  unsigned long long t = modPow(a, n / 2, p);
  return (t * t) % p;
}

int main() {
    
    unsigned long long a, x, m;
    cin >> a >> x >> m;
    unsigned long long b = a - 1;
    unsigned long long ans = modPow(a, x, b*m) - 1ull;
    ans = ans / b;
    cout << ans << endl;
    
    return 0;
}