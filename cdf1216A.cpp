#include <bits/stdc++.h>
using namespace std; 
#define ll  long long
int main()
{
	ll n;
	cin >> n;
	vector<char> s(n);
	for(ll i=0;i<n;i++){
		cin >> s[i];
	}
	ll ans=0;
	for(ll i=0;i<n;i+=2){
		if(s[i]==s[i+1]){
			ans++;
			if(s[i]=='b'){
				s[i]='a';
			}else{
				s[i]='b';
			}
		}
	}
	cout << ans << endl;
	for(ll i=0;i<n;i++){
		cout << s[i];
	}
    cout<<endl;
	return 0;
}