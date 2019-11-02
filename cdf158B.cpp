#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[5];
int main(){
    int n,temp;
    cin>>n;
    memset(ara,0,5);
    for(int i = 0; i < n; i++){
        cin>>temp;
        ara[temp]++;
    }
    ara[1] = max(ara[1] - ara[3],0);
    int taxi = ara[3] + ara[4] + (ara[1] + 2*ara[2] + 3)/4;
    cout<<taxi<<endl;
    return 0;
}
//buzhay vul chilo :)