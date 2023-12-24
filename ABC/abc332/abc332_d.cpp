#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using ll = long long;

int bsort (vector<int> v) {
    int n = v.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                cnt++;
            }
        }
    }
    return cnt;
}
int bsort2 (vector<int> v) {
    int n = v.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                cnt++;
            }
        }
    }
    return cnt;
}


int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> b[i][j];
        }
    }
    vector<set<int>> sa(h), sb(h);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            sa[i].insert(a[i][j]);
            sb[i].insert(b[i][j]);
        }
    }
    vector<pair<int, int>> p;
    set<int> jd;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            if (sa[i] == sb[j] and !jd.count(j)) {
                jd.insert(j);
                p.push_back({i, j});
            }
        }
    }
    if (p.size() != h) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> da(h), db(h);
    
    for (int i = 0; i < h; i++) {
        da[i] = p[i].first;
        db[i] = p[i].second;
    }
    int ca = bsort(da), cb = bsort(db);
    int ans = min(abs(ca - cb), abs(bsort2(da) - bsort2(db)));

    vector<set<int>> sra(w), srb(w);
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            sra[i].insert(a[j][i]);
            srb[i].insert(b[j][i]);
        }
    }
    
    vector<pair<int, int>> c;
    set<int> jr;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++) {
            if (sra[i] == srb[j] and !jr.count(j)) {
                jr.insert(j);
                c.push_back({i, j});
            }
        }
    }
    if (c.size() != w) {
        cout << -1 << endl;
        return 0;
    }
    vector<int> dra(w), drb(w);
    
    for (int i = 0; i < w; i++) {
        dra[i] = c[i].first;
        drb[i] = c[i].second;
    }
    ans += min(abs(bsort(dra) - bsort(drb)), abs(bsort2(dra) - bsort2(drb)));
    cout << ans << endl;
    
    return 0;
}