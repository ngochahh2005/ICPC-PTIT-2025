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
    ll x, y;
    cin >> x >> y;
    if (abs(x - y) > 1) cout << "Alice";
    else cout << "Bob";
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|