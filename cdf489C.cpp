#include<bits/stdc++.h>
using namespace std;
//typedef ll long long 

int main(){
    int m,s,temp,c;
    cin>>m>>s;
    temp = s;
    if(s == 0 and m == 1) cout<<"0 0"<<endl;
    else if(s == 0 || s >9*m) cout<<"-1 -1"<<endl;
    else{
        for(int i = m-1; i >= 0; i--){
            c = max(0,temp - 9*i);
            if(c == 0 and i == m-1) c = 1;
            cout<<c;
            temp -= c;
        }

        cout<<" ";
        temp = s;
        
        for(int i = m-1; i >= 0; i--){
            c = min(9,temp);
            cout<<c;
            temp -= c;
        }
    }
    cout<<endl;
    return 0;
}