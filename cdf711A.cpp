#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,part;
    int n,paisi;
    cin>>n;
    while(n--){
        cin>>part;
        str += part +"\n";
    }
    paisi = str.find("OO");
    if(paisi >= 0){
        str.replace(paisi,2,"++");
        cout<<"YES"<<endl;
        cout<<str<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}