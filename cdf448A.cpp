#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp,a_sum = 0,b_sum = 0;
    for(int i = 1; i <= 3; i++){
        cin>>temp;
        a_sum += temp;
    }
    for(int i = 1; i <= 3; i++){
        cin>>temp;
        b_sum += temp;
    }
    cin>>n;
    b_sum = (b_sum + 10 -1)/10;
    a_sum = (a_sum + 5 -1)/5;
    if(a_sum + b_sum > n) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;

}