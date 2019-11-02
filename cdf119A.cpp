#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y){
    if(x % y == 0) return y;
    return gcd(y,x%y);
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    while(1){
        n -= gcd(a,n);
        if(n == 0){
            cout<<"0"<<endl;
            return 0;
        }
        else if(n < gcd(b,n)){
            cout<<"0"<<endl;
            return 0;
        }
        n -= gcd(b,n);
        if(n == 0){
            cout<<"1"<<endl;
            return 0;
        }
        else if(n < gcd(a,n)){
            cout<<"1"<<endl;
            return 0;
        }
    }
    return 0;
}