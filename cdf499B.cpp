#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    map<string,string>str;
    string s1,s2;
    cin>>n>>m;
    while(m--){
        cin>>s1>>s2;
        if(s2.size() < s1.size()){
            str[s1] = s2;
        }
        else str[s1] = s1;
    }
    while(n--){
        cin>>s1;
        cout<<str[s1]<<" ";
    }
    cout<<endl;
    return 0;
}