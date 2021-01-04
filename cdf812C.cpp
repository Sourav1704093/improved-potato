#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1e5+10;

ll ara[M],cost[M],n,s;

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    cin>>n>>s;
    for(ll i = 1; i <= n; i++) cin>>ara[i];
    for(ll k = n; k >= 1; k--){
        for(ll i = 1; i <= n; i++){
            cost[i] = ara[i] + i*k;
        }
        sort(cost+1,cost+n+1);
        ll sum = 0;
        for(ll j = 1; j <= k; j++) sum += cost[j];
        if(sum <= s){
            cout<<k<<" "<<sum<<endl;
            return 0;
        }
    }
    cout<<"0 0"<<endl;
    return 0;
}