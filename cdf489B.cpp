#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,m,n,count = 0;
    cin>>n;
    int ara[n];
    for(int i = 0; i < n; i++) cin>>ara[i];
    cin>>m;
    int bra[m];
    for(int i = 0; i < m; i++) cin>>bra[i];
    sort(ara,ara+n);
    sort(bra,bra+m);
    /*if(n == 1 || m == 1){
        cout<<"1"<<endl;
        return 0;
    }*/
    for(i = 0,j = 0; i < n, j <m; ){
        if(ara[i] - 1 > bra[j]) j++;
        else if(ara[i] < bra[j]-1) i++;
        else {
            i++;
            j++;
            count++;
        }      
    }
    cout<<count<<endl;
    return 0;
}