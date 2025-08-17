#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

const int MAX = 100005;

int n, q;
ll a[MAX], subSum[MAX];
int sz[MAX], par[MAX];
vector<int> g[MAX];

vector<multiset<pair<int,int>>> children;

void dfs(int u, int p = 0){
    par[u] = p;
    sz[u] = 1;
    subSum[u] = a[u];

    for (int v : g[u])
        if (v != p){
            dfs(v, u);
            sz[u] += sz[v];
            subSum[u] += subSum[v];
            children[u].insert({-sz[v], v});
        }
}

int son(int u) {
    return children[u].empty() ? -1 : children[u].begin()->second;
}

void promote(int x){
    if (par[x] == 0 || children[x].empty()) return; 

    int s = son(x), p = par[x];

    int sz_x = sz[x], sz_s = sz[s];

    ll sum_x = subSum[x], sum_s = subSum[s];

    children[x].erase(children[x].find({-sz_s, s}));
    children[p].erase(children[p].find({-sz_x, x}));

    par[s] = p;
    par[x] = s;

    sz[s] = sz_x;
    subSum[s] = sum_x;

    sz[x] = sz_x - sz_s;
    subSum[x] = sum_x - sum_s;

    children[p].insert({-sz[s], s});
    children[s].insert({-sz[x], x});
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    children.assign(n + 1, {});
    dfs(1);

    while (q--) {
        int t, x;  
        cin >> t >> x;
        if (t == 1) cout << subSum[x] << '\n';
        else promote(x);
    }
    return 0;
}