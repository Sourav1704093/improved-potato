#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,g,n;
    cin>>b>>g>>n;
    int count = 0;
    for(int i = 0; i <= b; i++){
        for(int j = 0; j <= g; j++){
            if(i+j == n) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}