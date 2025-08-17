#include <bits/stdc++.h>
#define ll unsigned long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll L[90];

void lucas(int n) {
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= n; i++) {
        L[i] = L[i-1] + L[i-2];
    }
}
    
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    lucas(n);
    cout << L[n];
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|