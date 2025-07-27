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
    string s;
    cin >> s;
    int a = -1, z = -1;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == 'A' && a == -1) a = i;
        else if (c == 'Z') z = i;
    }
    if (a == -1 || z == -1 || a > z) cout << 0;
    else cout << z - a + 1;
}