#include<bits/stdc++.h> /*etto easy vabe think kori nai ettodin. ebar dekhi hoy kina*/
using namespace std;
#define ll long long
int main(){
    ll n,i,one = 0;
    string str;
    cin>>str;
    n = str.size();
    for(i = 0; i < n; i++){
        if(str[i] == '1') one++;
    }
    if(one == 0) cout<<"0"<<endl;
    else if(one == 1) cout<<n/2<<endl;
    else cout<<(n+1)/2<<endl;
    return 0;
}