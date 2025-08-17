#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 998244353
#define lmt 1000000
using namespace std;

int l[55], r[55];
int n, m;
vector<int> mobius;

vector<int> mobius_sieve(int n) {
    vector<int> rs(n+1, 1), pr;
    vector<int> lp(n+1, 0);
    for(int i = 2; i <= n; i++) {
        if(lp[i] == 0) { 
            lp[i] = i; 
            pr.push_back(i); 
            rs[i] = -1; 
        }
        for(int p: pr) {
            if(p > lp[i] || p*i > n) break;
            lp[p*i] = p;
            if(p == lp[i]) rs[p*i] = 0;
            else rs[p*i] = -rs[i];
        }
    }
    return rs;
}

long long count_g(int g) {
    vector<long long> dp(m/g + 1, 0);
    dp[0] = 1;
    int maxSum = m / g;
    for(int i = 0; i < n; i++) {
        int low = (l[i] + g - 1) / g;
        int high = r[i] / g;
        if(low > high) return 0;
        vector<long long> prefix(maxSum + 1, 0), newdp(maxSum + 1, 0);
        prefix[0] = dp[0];
        for(int s = 1; s <= maxSum; s++) {
            prefix[s] = (prefix[s-1] + dp[s]) % mod;
        }
        for(int sum = 0; sum <= maxSum; sum++) {
            int left = sum - high;
            if(left < 0) left = 0;
            int right = sum - low;
            if(right < 0) continue;
            long long val = prefix[right];
            if(left > 0) val = (val - prefix[left-1] + mod) % mod;
            newdp[sum] = val;
        }
        dp.swap(newdp);
    }
    long long res = 0;
    for(int s = 0; s <= maxSum; s++) res = (res + dp[s]) % mod;
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> l[i] >> r[i];
    mobius = mobius_sieve(m);
    long long ans = 0;
    for(int g = 1; g <= m; g++) {
        if(mobius[g] == 0) continue;
        long long ways = count_g(g);
        ans = (ans + mobius[g] * ways) % mod;
    }
    ans = (ans % mod + mod) % mod;
    cout << ans << "\n";
}


//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|