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
        string s;
        ll a, b = 0;
        cin >> a >> s;
        int n = s.size();
        ll tmp = 1;
        for (int i = n-1; i >= 0; i--) {
            ll dg = s[i] - '0';
            ll cur = ((dg % a) * tmp) % a;
            b = (cur + b) % a;
            tmp = (tmp * (10 % a)) % a;
        } 
        cout << __gcd(a, b) << "\n";
    }
}