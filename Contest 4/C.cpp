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
    string s[n];
    for (int i = 0; i < n; i++) cin >> s[i];
    int dx[4] = {0, 1, 1, 1};
    int dy[4] = {1, 0, 1, -1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int d = 0; d < 4; d++) {
                int x2 = i + dx[d] * 5;           
                int y2 = j + dy[d] * 5;
                if (x2 < 0 || x2 >= n || y2 < 0 || y2 >= n) continue;

                int dots = 0;
                for (int k = 0; k < 6; k++) {
                    int x = i + dx[d] * k;
                    int y = j + dy[d] * k;
                    if (s[x][y] == '.') dots++;
                    if (dots > 2) break;
                }

                if (dots <= 2) {
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|