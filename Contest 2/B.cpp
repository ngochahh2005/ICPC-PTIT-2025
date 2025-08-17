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
    vector<int> a1, a2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (i % 2 == 0) a1.push_back(tmp);
        else a2.push_back(tmp);
    }
    if (n % 2 == 0) {
        reverse(a2.begin(), a2.end());
        for (int x : a2) cout << x << " ";
        for (int x : a1) cout << x << " ";
    } else {
        reverse(a1.begin(), a1.end());
        for (int x : a1) cout << x << " ";
        for (int x : a2) cout << x << " ";
    }
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|