#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

int h[1005][1005];

int number(int a, int b, int c) {
    return a * 100 + b * 10 + c;
}
    
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int abc; 
    cin >> abc;
    int a = abc / 100;
    int b = abc / 10 % 10;
    int c = abc % 10;
    int bca = number(b, c, a);
    int cab = number(c, a, b);
    cout << abc + bca + cab;
}

//  _   _ _____ _   _ _   _ 
// | \ | |_   _| \ | | |_| |
// |  \| | | | |  \| |  _  |
// |_| \_| \_/ |_| \_|_| |_|