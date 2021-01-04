#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t,n,x;
    cin>>t;
    while(t--){
        bool tmp = 0;
        cin>>n>>x;
        int ara[n],bra[n],add[n];

        for(int i = 0; i < n; i++) cin>>ara[i];
        for(int i = 0; i < n ; i++) cin>>bra[i];

        sort(bra,bra+n,greater<int>());

        for(int i = 0; i < n; i++){
            add[i] = ara[i] + bra[i];
        }
        
        for(int i = 0 ; i < n; i++){
            if(add[i] > x){
                tmp = 1;
            }
            else continue;
        }
        if(tmp == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}