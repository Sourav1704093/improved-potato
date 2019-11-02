#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,odd = 0, even = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>a;
        if(a%2 == 0) even++;
        else odd++;
        //cout<<min(odd,even)<<endl;
    }
    cout<<min(odd,even)<<endl;
    return 0;
}