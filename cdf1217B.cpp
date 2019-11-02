#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,d,h;
        int md = 0;
        int mdh = 0;
        cin>>n>>x;
        for(int i = 0; i < n; i++){
            cin>>d>>h;
            md = max(md,d);
            mdh = max(mdh,d-h);
        }
        if(x - md <= 0) cout<<"1"<<endl;
        else if(x > md && mdh == 0) cout<<"-1"<<endl;
        else{
            x -= md;
            cout<<((x + mdh-1)/mdh) + 1<<endl;
        }
    }
    return 0;
}