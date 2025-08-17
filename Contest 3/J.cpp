#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define cuongmixi ios_base::sync_with_stdio(false); cin.tie(NULL);

void test(){
    int n,c; cin>>n>>c;
    multiset<int> se;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        se.insert(x);
    }
    int cnt=0;
    while(se.size()){
        auto it=se.begin();
        auto it1=se.lower_bound(c-*it);
        if(it1==se.begin()) break;
        --it1;
        if(it1==it) break;
        se.erase(it1);
        se.erase(it);
        ++cnt;
    }
    cnt+=se.size();
    cout<<cnt;
}

signed main(){
    cuongmixi;
    int t=1;
    while(t--){
        test();
    }
}