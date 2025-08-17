#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;
    
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s, k;
    cin >> k >> s;
    if (k * 3 < s) cout << 0, 1;
    ll cnt = 0;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            if (x + y > s) break;
            if (s - x - y <= k) cnt++;
        }
    }
    cout << cnt;
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|