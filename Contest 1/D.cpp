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
    int a[n+5];
    for (int i = 0; i < n; i++) cin >> a[i];
    multiset<int> color;
    for (int i = 0; i < n; ++i) {
        auto it = color.lower_bound(a[i]);
        if (it == color.begin()) color.insert(a[i]);
        else {
            --it;
            color.erase(it);
            color.insert(a[i]);
        }
    }
    cout << color.size();
}