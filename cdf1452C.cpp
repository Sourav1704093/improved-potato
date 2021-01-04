#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int fb = 0,tb= 0,ans = 0;
        string str;
        cin>>str;
        for(int i= 0; i < str.size(); i++){
            if(str[i] == '(') fb++;
            if(str[i] == '[') tb++;

            if(str[i] == ')'){
                ans += (fb>0);
                fb = max(fb-1,0);
            }

            if(str[i] == ']'){
                ans += (tb>0);
                tb = max(tb-1,0);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}