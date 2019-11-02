//try to solve it using dp next time :)
//voy pele hbe!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,e,baki = 0,check = 0;
    cin>>n>>d>>e;
    int ans = n;
    while(5*e*check <= n){
        baki = n - 5*e*check;
        //cout<<baki<<endl;
        ans = min(ans,baki%d);
        //cout<<ans<<endl;
        check++;
    }
    cout<<ans<<endl;
    return 0;
}