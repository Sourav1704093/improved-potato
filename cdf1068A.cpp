#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,k,l,a,b;
    cin>>n>>m>>k>>l;
    if(n < m) cout<<"-1"<<endl;
    else{
        a=n/m;
        b=(l+k+m-1)/m;
        if(a<b)
            cout<<"-1"<<endl;
        else
            cout<<b<<endl;
    }
    return 0;
}