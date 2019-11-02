#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	cin>>s1;
	if((s1.find("AB")!=-1&&s1.find("BA",s1.find("AB")+2)!=-1)) cout<<"YES"<<endl;
    else if((s1.find("BA")!=-1&&s1.find("AB",s1.find("BA")+2)!=-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

// learned new thing 