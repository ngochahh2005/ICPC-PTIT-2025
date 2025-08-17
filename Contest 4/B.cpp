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
    int n, m;
    cin >> n >> m;
    int a[n+5], b[m+5];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];
    sort(a, a+n);
    sort(b, b+m);
    int mi = INT_MAX;
    for (int i = 0; i < n; i++) {
        int j = lower_bound(b, b+m, a[i]) - b;
        if (j == 0) mi = min(mi, abs(a[i] - b[j]));
        else if (j == m) mi = min(mi, abs(a[i] - b[j-1]));
        else mi = min({mi, abs(a[i] - b[j]), abs(a[i] - b[j-1])});
    }
    cout << mi;
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|