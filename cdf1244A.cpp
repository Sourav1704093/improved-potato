#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d,k,p_no,pc_no;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d>>k;

        if(a % c != 0) 
            p_no = a/c + 1;
        else p_no = a/c;
        
        if(b % d != 0) 
            pc_no = b/d + 1;
        else pc_no = b/d;

        if(p_no + pc_no <= k) cout<<p_no<<" "<<pc_no<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}