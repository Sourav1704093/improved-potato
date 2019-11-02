#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x,d;
    cin>>n>>x;
    char ch;
    ll count = 0;
    for(int i = 0; i < n; i++){
        cin>>ch>>d;
        if(ch == '+') x += d;
        else{
            if(x > d) x -= d;
            else if(x == d) x = 0;
            else count++;
        }
    }
    cout<<x<<" "<<count<<endl;
    return 0;
}