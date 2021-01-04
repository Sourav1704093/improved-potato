#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t,x,y,k;
    cin>>t;
    while(t--){
        cin>>x;
        y = 0,k = 0;
        while (y < x){
            k++;
            y += k;
        }
        int ans = k + (y-x == 1);
        cout<<ans<<endl;
    }
    return 0;
}