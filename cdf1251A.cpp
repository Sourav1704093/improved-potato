#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		set<char> ans;
		ans.clear();
		for(ll i = 0;i<str.size();){
			if(str[i]!=str[i+1]){			
				ans.insert(str[i]);	
                i++;
			}
			else i+= 2;
		}
		set<char>::iterator it;
		for(it=ans.begin();it!=ans.end();it++){
		    cout<<*it;
		}
		cout<<endl;
	}
}