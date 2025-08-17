#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct dsu {
    vector<int> par, sz;
    dsu (int n) : par(n+5), sz(n+5) {
        for (int i = 1; i <= n; i++) {
            par[i] = i;
            sz[i] = 1;
        }
    }
    int find(int v) {
        if (par[v] == v) return v;
        return par[v] = find(par[v]);
    }
    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return ;
        if (sz[a] < sz[b]) swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    dsu d(n);
    while (m--) {
        int a, b;
        cin >> a >> b;
        d.unite(a, b);
    }
    int rs = 0;
    for (int i = 1; i <= n; i++) {
        rs = max(rs, d.sz[i]);
    }
    cout << rs;
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|