#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) { 
    return a.second > b.second; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;
    vector<pair<ll, ll>> a(n);

    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        sum += a[i].first;
    }

    for (int i = 0; i < n; i++) cin >> a[i].second;

    sort(a.begin(), a.end(), cmp);

    ll k = 0, total = 0;
    for (int i = 0; i < n; i++){
        total += a[i].second;
        ++k;
        if (total >= sum) break;
    }

    vector<vector<ll>> dp(k + 1, vector<ll>(sum + 1, -1e9));

    dp[0][0] = 0;
    for (int i = 0; i < n; i++){
        ll fi, se;
        tie(fi, se) = a[i];
        for (int j = k - 1; j >= 0; j--){
            for (int s = 0; s <= sum; s++){
                if (dp[j][s] < 0) continue;

                ll x = min(s + se, sum);
                dp[j + 1][x] = max(dp[j + 1][x], dp[j][s] + fi);
            }
        }
    }
    cout << k << " " << sum - dp[k][sum];
    return 0;
}