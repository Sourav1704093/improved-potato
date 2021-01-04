#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>cnt(n+1);
        vector<int>ind(n+1);

        for(int i = 0; i < n; i++){
            cin>>x;
            cnt[x]++;
            ind[x] = i+1;
        }
        int ans = -1;
        for(int i = 0; i <= n; i++){
            if(cnt[i] == 1){
                ans = ind[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}