#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<ll> f;
void fibo() {
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i <= 92; i++) {
        ll tmp = f[i-1] + f[i-2];
        f.push_back(tmp);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fibo();
    ll n;
    cin >> n;
    while (true) {
        int i = upper_bound(f.begin(), f.end(), n) - f.begin();
        if (n - f[i-1] == 0) {
            cout << n;
            break;
        } else n -= f[i-1];
    }   
}