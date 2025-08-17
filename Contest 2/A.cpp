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
    int n;
    cin >> n;
    int s = 0, ma = 0;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        ma = max(ma, tmp);
        s += tmp;
    }
    if (ma < s - ma) cout << "Yes";
    else cout << "No";
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|