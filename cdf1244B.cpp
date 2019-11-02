#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,count;
    cin>>t;
    string str;
    while(t--){
        cin>>n;
        cin>>str;
        count = n;
        for(int i= 0; i < n; i++){
            if(str[i] == '1'){
                count = max(count, 2*max(i+1,n-i));
            }
        }
        cout<<count<<endl;
    }
    return 0;
}