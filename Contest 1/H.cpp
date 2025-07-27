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
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        int diff = abs(a-b);
        if (diff == 0) {
            cout << 0 << "\n";
            continue;
        }
        int x = (int)floor(sqrt((double)2*diff));
        while(true) {
            int s = x*(x+1)/2;
            // cout << x << '\n';
            if (s >= diff && (s - diff) % 2 == 0) {
                cout << x << "\n";
                break;
            }
            x++;
        }
    }
}