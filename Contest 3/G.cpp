#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll MAX = 100005;
vector<ll> a(MAX);
vector<multiset<ll>> tree;

void build(ll idx, ll l, ll r) {
    if (l == r) {
        tree[idx].insert(a[l]);
        return;
    }

    ll mid = l + (r - l) / 2;
    build(idx * 2, l, mid);
    build(idx * 2 + 1, mid + 1, r);
    auto &left = tree[idx * 2];
    auto &right = tree[idx * 2 + 1];

    if (left.size() < right.size()) {
        tree[idx] = right;
        tree[idx].insert(left.begin(), left.end());
    } else {
        tree[idx] = left;
        tree[idx].insert(right.begin(), right.end());
    }
}

void update(ll idx, ll l, ll r, ll u, ll pos, ll val) {
    if (!tree[idx].empty()) {
        auto it = tree[idx].find(pos);
        if (it != tree[idx].end()) tree[idx].erase(it);
    }
    tree[idx].insert(val);

    if (l == r) return;

    ll mid = l + (r - l) / 2;
    if (u <= mid) update(idx * 2, l, mid, u, pos, val);
    else update(idx * 2 + 1, mid + 1, r, u, pos, val);
}

ll query(ll idx, ll l, ll r, ll u, ll v, ll x) {
    if (r < u || l > v) return LLONG_MAX;
    if (u <= l && v >= r) {
        if (tree[idx].empty()) return LLONG_MAX;
        auto it = tree[idx].upper_bound(x);

        if (it == tree[idx].end()) return LLONG_MAX;
        else return *it;
    }

    ll mid = l + (r - l) / 2;
    ll a1 = query(idx * 2, l, mid, u, v, x);
    ll a2 = query(idx * 2 + 1, mid + 1, r, u, v, x);
    return min(a1, a2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n, m;
    cin >> n >> m;

    tree.resize(4 * n + 5);
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);

    while (m--) {
        int t;
        cin >> t;
        if (t == 1) {
            ll u, val;
            cin >> u >> val;
            if (a[u] == val) continue;
            update(1, 1, n, u, a[u], val);
            a[u] = val;
        } 
        else {
            ll u, v, x;
            cin >> u >> v >> x;
            ll res = query(1, 1, n, u, v, x);
            if (res == LLONG_MAX) cout << "-1\n";
            else cout << res << "\n";
        }
    }
    return 0;
}