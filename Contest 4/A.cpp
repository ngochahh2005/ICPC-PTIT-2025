#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int inf = m + 1;
    
    ll dp[12][12][12] = {};
    ll ndp[12][12][12] = {};
    
    dp[inf][inf][inf] = 1;
    
    for (int t = 0; t < n; t++){
        for (int a = 1; a <= inf; a++)
            for (int b = 1; b <= inf; b++)
                fill(begin(ndp[a][b]), end(ndp[a][b]), 0ll);
        
        for (int a = 1; a <= inf; a++)
            for (int b = 1; b <= inf; b++)
                for (int c = 1; c <= inf; c++){
                    ll cur = dp[a][b][c];
                    if (!cur) continue;

                    for (int v = 1; v <= m; v++) {
                        int na, nb, nc;
                        if (v <= a) { 
                            na = v;  
                            nb = b;  
                            nc = c; 
                        }
                        else if (v <= b){ 
                            na = a;  
                            nb = v;  
                            nc = c; 
                        }
                        else if (v <= c){ 
                            na = a;  
                            nb = b;  
                            nc = v; 
                        }
                        else continue;

                        ndp[na][nb][nc] += cur;
                        if (ndp[na][nb][nc] >= MOD) ndp[na][nb][nc] -= MOD;
                    }
                }

        for (int a = 1; a <= inf; a++)
            for (int b = 1; b <= inf; b++)
                copy(begin(ndp[a][b]), end(ndp[a][b]), begin(dp[a][b]));
    }
    
    ll ans = 0;
    for (int a = 1; a <= inf; a++)
        for (int b = 1; b <= inf; b++)
            for (int c = 1; c <= m; c++){     
                ans += dp[a][b][c];
                if (ans >= MOD) ans -= MOD;
            }
    cout << ans << '\n';
    return 0;
}