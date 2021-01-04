#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n,k;
    cin>>n>>k;
    vector<int>x(n),y(n);
    for(int i = 0; i < n; i++) cin>>x[i]>>y[i];
    for(int i = 0; i < n; i++){
        bool ok = true;
        for(int j = 0; j < n; j++){
            if(abs(x[i] - x[j]) + abs(y[i] - y[j]) > k) ok = false;
        }
        if(ok){
            puts("1");
            return 0;
        }

    }
    puts("-1");
    return 0;
}

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;;
    cin>>t;
    while(t--){
        solve();
    }

}