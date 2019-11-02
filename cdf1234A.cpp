#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,n,a,ans;
    ll sum = 0;
    cin>>t;
    while(t--){
        sum = 0;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>a;
            sum += a;
        }
        if(sum % n != 0){
            ans = sum/n +1;
        }
        else ans = sum/n;
        cout<<ans<<endl;
    }
    return 0;

}