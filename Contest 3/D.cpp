#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Point{
    ll min1 = LLONG_MAX, min2 = LLONG_MAX;
    ll max1 = LLONG_MIN, max2 = LLONG_MIN;
    int cntMin1 = 0, cntMax1 = 0;

    void add(ll x){
        if (x < min1){ 
            min2 = min1; 
            min1 = x; 
            cntMin1 = 1; 
        }
        else if (x == min1) cntMin1++;
        else if (x < min2) min2 = x;

        if (x > max1){ 
            max2 = max1; 
            max1 = x; 
            cntMax1 = 1; 
        }
        else if (x == max1) cntMax1++;
        else if (x > max2) max2 = x;
    }
    ll remove(ll x){
        if (cntMax1 == 1 && x == max1) return max2 - min1;
        if (cntMin1 == 1 && x == min1) return max1 - min2;
        return max1 - min1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; 
    cin >> n;
    vector<ll> u(n), v(n);
    Point e1, e2;
    for (int i = 0; i < n; i++) {
        ll x, y; 
        cin >> x >> y;
        u[i] = x + y;
        v[i] = x - y;
        e1.add(u[i]);
        e2.add(v[i]);
    }

    ll ans = (1LL << 62);
    for (int i = 0; i < n; i++) {
        ll a = e1.remove(u[i]);
        ll b = e2.remove(v[i]);
        ans = min(ans, max(a, b));
    }
    cout << ans << '\n';
    return 0;
}