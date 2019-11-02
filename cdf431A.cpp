#include<bits/stdc++.h>
using namespace std;
int main(){
    int ara[4];
    int ans =0;
    for(int i = 0; i < 4; i++) cin>>ara[i];
    string str;
    cin>>str;
    //cout<<str<<endl;
    //cout<<str.size()<<endl;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1') ans += ara[0];
        else if(str[i] == '2') ans += ara[1];
        else if(str[i] == '3') ans += ara[2];
        else ans += ara[3];
    }
    cout<<ans<<endl;
    return 0;
}