#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    //bool check = false;
    ll x,y,diff;
    while(t--){
        bool check = false;
        cin>>x>>y;
        diff = x-y;
        if(diff != 1){
            /*for(int i = 2; i < INT_MAX ; i++){
                if(diff % i == 0){
                    check = true;
                    break;
                }
            }*/
            check = true;
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;

}