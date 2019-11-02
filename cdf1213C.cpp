#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll k = n/m;
        ll sum1 = 0, sum2 = 0;
        for(int  i = 0; i <= 9; i++){
            sum1 += m*(i+1)%10;
        }
        for(int i = 0; i <= k%10; i++){
            sum2 += m*(i+1)%10;
        }
        ll ans = k*sum1 + sum2;
        cout<<ans<<endl;
    }
    return 0;
}