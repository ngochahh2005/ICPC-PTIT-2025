#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;                         
int height[1005][1005];                 
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

bool isValid(int x, int y){
    return (x >= 0 && x < n && y >= 0 && y < m);
}

ll solve(){
    ll ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int cur = height[i][j];
            if (cur == 0) continue;            

            ans += 2;                         
            for (int k = 0; k < 4; k++){       
                int i1 = i + dx[k];
                int j1 = j + dy[k];
                
                int h = isValid(i1, j1) ? height[i1][j1] : 0;   
                if (cur > h) ans += cur - h;
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  
    cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> height[i][j];
            }
        }
        cout << solve() << '\n';
    }
    return 0;
}