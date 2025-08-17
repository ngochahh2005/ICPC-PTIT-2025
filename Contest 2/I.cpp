#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll C[65][65];

void init(){
    for (int i = 0; i < 65; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || j == i){
                C[i][j] = 1;
            }
            else {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
}

ll get(ll a, ll b){ 
    return C[a + b][a]; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    ll a, b, k;
    cin >> a >> b >> k;

    string ans = "";
    while (a > 0 && b > 0) {
        ll cnt = get(a - 1, b);
        if (k <= cnt) {
            ans += "a";
            --a;
        } 
        else {
            ans += "b";
            k -= cnt;
            --b;
        }
    }
    ans += string(a, 'a');
    ans += string(b, 'b');
    cout << ans;
    return 0;
}