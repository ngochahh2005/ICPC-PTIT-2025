#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool check(ll a) {
    ll a2 = 2 * a * a;
    for (ll b = 1; b * b <= a2 && b <= 1e5; b++) {
        ll c2 = a2 - b * b;
        ll c = sqrt(c2);
        if (c > 1e5) continue;
        if (c * c == c2 && b != c && a != c && a != b) return true;
    }
    return false;
}
    
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a;
    cin >> a;
    if (check(a)) cout << "YES";
    else cout << "NO";
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|