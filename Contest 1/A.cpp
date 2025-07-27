#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct diem {
    int x, y;
};

bool check(diem a, diem b, diem c) {
    return (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) != 0;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    diem a[n];
    for (int i = 0; i < n; i++) cin >> a[i].x >> a[i].y;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (check(a[i], a[j], a[k])) cnt++;
            }
        }
    }
    cout << cnt;
}