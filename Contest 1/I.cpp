#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define cuongmixi ios_base::sync_with_stdio(false); cin.tie(NULL);

int p[500];
vector<int> nt;
void sang(){
    for(int i=2;i<500;i++){
        p[i]=1;
    }
    for(int i=2;i<=sqrt(500);i++){
        if(p[i]){
            for(int j=i*i;j<500;j+=i){
                p[j]=0;
            }
        }
    }
    for(int i=2;i<500;i++){
        if(p[i]) nt.push_back(i);
    }
}
int legende(int n,int p){
    int res=0;
    for(int i=p;i<=n;i*=p){
        res+=n/i;
    }
    return res;
}
void test(){
    int n,k;
    sang();
    while(cin>>n>>k){
        int cnt=1;
        for(int x:nt){
            if(x>n) break;
            int tmp=legende(n,x)-legende(k,x)-legende(n-k,x);
            if(tmp) cnt*=(tmp+1);
        }
        cout<<cnt<<endl;
    }
}

signed main(){
    cuongmixi;
    int t; t=1;
    while(t--){
        test();
    }
}