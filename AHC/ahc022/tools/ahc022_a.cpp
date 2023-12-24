#include <bits/stdc++.h>
using namespace std;
using ll = long long;



void printGrid(vector<vector<int>> &Grid) {
    for (auto Row : Grid) {
        for (auto Element : Row) {
            cout << Element << " ";
        }
        cout << endl;
    }
}

void printSus(int i, int x, int y) {
    cout << i << " " << x << " " << y << endl;
}

void printAns(vector<int> &E) {
    cout << "-1 -1 -1" << endl;
    for (int e : E) cout << e << endl;
} 

int main(){
    int L, N, S;
    cin >> L >> N >> S;
    vector<int> Y(N), X(N), E(N), V(N);
    for (int i = 0; i < N; i++) {
        cin >> Y[i] >> X[i];
    }
    vector P(L, vector<int>(L, 500));
    vector changed(L, vector<bool>(L, false));

    const int Delta = min(500, 2*S) - 1;
    const int dy[5] = {0, 0, 1, 0, -1}, dx[5] = {0, 1, 0, -1, 0};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            int ny = (Y[i] + dy[j] + L) % L, nx = (X[i] + dx[j] + L) % L;
            if (changed[ny][nx]) continue;
            if (i & (1 << j)) P[ny][nx] += Delta;
            else P[ny][nx] -= Delta;
            changed[ny][nx] = true;
        }
    }
    
    

    printGrid(P);

    for (int i = 0; i < N; i++) {
        int ind = 0;
        long double est[5] = {0, 0, 0, 0, 0};
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 2000 / N; k++) {
                printSus(i, dy[j], dx[j]);
                int m;
                cin >> m;
                est[j] += m;
            }  
            est[j] /= 2000 / N;
            if (est[j] > 500) ind += (1 << j);
        }
        E[i] = ind;
    }
    printAns(E);
    
    
    return 0;
}