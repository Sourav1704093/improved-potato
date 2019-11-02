//vai tre dia kiccu hobe na!!!
//r halka jor dile e parti contest time e solve krte:)
#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int ara[n];
        for(i = 0; i < n; i++){
            cin>>ara[i];
        }
        int res = 0;
		int min = ara[n-1];
		for(int i=n-1;i>=0;i--){
			if(ara[i]>min){
				res++;
			}
			if(ara[i]<min){
				min = ara[i];
			}
		}
        cout<<res<<endl;
    }
    return 0;
}
