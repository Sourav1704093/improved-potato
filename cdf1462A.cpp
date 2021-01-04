#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        if(n<3){
            for(int i = 0; i < n; i++) cout<<v[i]<<" ";
        }
        else{
           for(int k = 0; k < n/2; k++){
                cout<<v[k]<<" "<<v[n-k-1]<<" ";
            }
            if(n&1) cout<<v[n/2];
        }
        cout<<endl;
    }
    return 0;
}