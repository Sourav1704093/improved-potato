#include<bits/stdc++.h> /*etto easy vabe think kori nai ettodin. ebar dekhi hoy kina*/
using namespace std; 
int main()
{
    int n,p,k;
    cin>>n>>p>>k;
    if (p-k>1) cout<<"<<"<<" ";
    for (int i=p-k;i<=p+k;i++)
    {
        if (i==p) cout<<"("<<p<<")"<<" ";
        else if (i>=1 && i<=n) cout<<i<<" ";
    }
    if (p+k<n) cout<<">>"<<endl;
    else cout<<endl;
    return 0;
}