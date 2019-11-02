#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,i,j,x;
    int count = 0;
	cin>>n;
    int ara[n];
	for(i=0; i<n; i++)
		cin>>ara[i];
	cout<<n<<endl;
	for(i=0; i<n; i++)
	{
		x=i;
		for(j=i; j<n; j++)
		{
			if(ara[x]>ara[j])
			{
				x=j;
                //count++;
			}
		}
		cout<<i<<" "<<x<<endl;
		swap(ara[i],ara[x]);
	}
	return 0;
}