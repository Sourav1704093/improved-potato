#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,ans = 0;
    cin>>n;
    m = INT_MAX;
    while(n--){
        cin>>a>>b;
        m = min(m,b);
        ans += m*a;
    }
    cout<<ans<<endl;
    return 0;
}