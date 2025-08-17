#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool check(ll a) {
    ll a2 = 2 * a * a;
    ll b = 1, c = 1e5;
    while (b < c) {
       ll b2 = b * b;
       ll c2 = c * c;
       if (b2 + c2 == a2) return true;
       else if (b2 + c2 > a2) c--;
       else b++; 
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
