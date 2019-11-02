#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 2e5+9;

ll fl[mx],lf[mx],ara[mx];

int main(){
    ll n,k,x,check;
    ll p = 1,ans = 0;
    cin>>n>>k>>x;
    for(ll i = 1; i <= n; i++) cin>>ara[i];
    for(ll i = 1; i <= n; i++) fl[i] = fl[i-1]|ara[i];
    for(ll i = n; i >= 1; i--) lf[i] = lf[i+1]|ara[i];

    while(k--){
        p *= x;
    }

    for(int i = 1; i <= n; i++){
        check = fl[i-1]|lf[i+1]|ara[i]*p;
        ans = max(ans, check);
    }
    cout<<ans<<endl;
    return 0;
}