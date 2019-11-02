#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int o = 0, n = 0,e = 0, z = 0,r = 0;
    cin>>k;
    string str;
    cin>>str;
    for(int i = 0; i < k; i++){
        if(str[i] == 'o') o++;
        else if(str[i] == 'n') n++;
        else if(str[i] == 'e') e++;
        else if(str[i] == 'z') z++;
        else r++;
    }
    /*int min_one = min(o,min(n,e));
    if(min_one >= 1){
        for(int i = 1; i <= min_one;i++) cout<<"1"<<" ";
        o -= min_one;
        n -= min_one;
        e -= min_one;
    }
    int mz = min(z,e);
    int mz1 = min(r,min(mz,o));
    if(mz1 >= 1){
        for(int i = 0; i <= mz1; i++){
            cout<<"0"<<" ";
        }
    }*/
    while((o != 0 && n != 0) && e != 0){
        cout<<"1"<<" ";
        o--;
        n--;
        e--;
    }
    while((z != 0 && r!= 0)&&(e != 0 && o != 0)){
        cout<<"0"<<endl;
        o--;
        z--;
        r--;
        e--;
    }
    
    return 0;
}