#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<int> x(n), y(n), z(n), w(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        z[i] = x[i] + y[i];
        w[i] = x[i] - y[i];
    }
    cout << max(abs(*max_element(begin(z), end(z)) - *min_element(begin(z), end(z))), abs(*max_element(begin(w), end(w)) - *min_element(begin(w), end(w)))) << endl;
    return 0;
}