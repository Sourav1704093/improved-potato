#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    long long ans = 0;
    cin>>a>>b>>c;
    if(2*(a+b) < 2*c) ans = 2*(a+b);
    else if(2*(a+c) < 2*b) ans = 2*(a+c);
    else if(2*(b+c) < 2*a) ans = 2*(b+c);
    else ans = a+b+c;
    cout<<ans<<endl;
    return 0;
}