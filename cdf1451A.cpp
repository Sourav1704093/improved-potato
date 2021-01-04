#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t,n;
    cin>>t;
    while(t--){
        int ans = 0;
        cin>>n;
        if(n <= 3) ans = n-1;
        else if(n >3 and (n%2 == 0)) ans = 2;
        else ans = 3;
        cout<<ans<<endl;
    }
    return 0;
}