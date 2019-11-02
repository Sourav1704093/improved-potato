#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[10000005];
int main(){
    int n,a,k = 0;
    cin>>n;
    for(int i = 0; i < n;i++){
        cin>>a;
        for(int j = 1; j <= a; j++){
            ara[++k] = i+1;
            //cout<<ara[k]<<" ";
        }
    }
    //cout<<endl;
    int m,b;
    cin>>m;
    for(int i = 1; i <= m; i++){
        cin>>b;
        cout<<ara[b]<<endl;
    }
    return 0;

}