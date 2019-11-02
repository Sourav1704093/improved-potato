#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k,i,j = 0;
    set<ll>ans;
    cin>>n>>k;
    for(i = 1; i*i <= n; i++){
        if(n % i == 0) ans.insert({i,n/i});
    }
    if(k > ans.size()) cout<<"-1"<<endl;
    else cout<<*next(ans.begin(),k-1)<<endl;
    return 0;
}