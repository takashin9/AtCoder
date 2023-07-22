#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    double n;
    cin >> n;
    for (int x = (int)(n/1.08); x < (int)(n/1.08) + 2; x++) {
        if (n/1.08 <= x and x < (n+1)/1.08) {
            cout << x << endl;
            return 0;
        } 
    }
    cout << ":(" << endl;
    
    
    
    return 0;
}