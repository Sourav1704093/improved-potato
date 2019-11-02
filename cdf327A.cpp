#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[1000010],r,t,n,k;
int main(){
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>ara[i];
		if(ara[i]==1) {
			r++;
			if(t>0) t--;
		}
		else t++;
        //cout<<"t = "<<t<<endl;
		if(t>k) k++;
        //cout<<"k = "<<k<<endl;
	}
	if(k==0) cout<<r-1<<endl;
	else cout<<r+k<<endl;
    return 0;
}