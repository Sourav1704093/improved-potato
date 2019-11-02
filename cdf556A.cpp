#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,o=0,z = 0;
    cin>>n;
    string str;
    cin>>str;
    for(int i = 0; i < n; i++){
        if(str[i] == '0') z++;
        else o++;
    }
    cout<<abs(z-o)<<endl;
    return 0;
}