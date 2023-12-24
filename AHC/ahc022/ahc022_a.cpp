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
    cout << -1 << " " << -1 << " " << -1 << endl;
    for (int e : E) cout << e << endl;
} 

int main(){
    int L, N, S;
    cin >> L >> N >> S;
    vector<int> Y(N), X(N), E(N), V(N);
    for (int i = 0; i < N; i++) {
        cin >> Y[i] >> X[i];
    }
    int Delta = 1000 / N;
    vector P(L, vector<int>(L, Delta * N / 2));
    
    iota(begin(V), end(V), 1);
    for (int i = 0; i < N; i++) {
        V[i] *= Delta;
        P[Y[i]][X[i]] = V[i];
    }

    printGrid(P);

    for (int i = 0; i < N; i++) {
        double aveRes = 0;
        for (int j = 0; j < 10000 / N; j++) {
            printSus(i, 0, 0);
            int m;
            cin >> m;
            aveRes += m;
        }
        aveRes /= 10000 / N;
        int ind = 0;
        double absMin = 1e9;
        for (int j = 0; j < N; j++) {
            if (absMin > abs((double)V[j] - aveRes)) {
                absMin = abs((double)V[j] - aveRes);
                ind = j;
            }
        }
        

        E[i] = ind;
    }
    printAns(E);
    
    
    return 0;
}