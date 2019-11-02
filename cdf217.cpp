#include<bits/stdc++.h>
using namespace std;
int main(){
    int str,it,exp,temp= 0;
    int t;
    cin>>t;
    while(t--){
        cin>>str>>it>>exp;
        if(str+exp>it){
            int low = 0;
            int high = exp;
            int mid;
            while(low <= high){
                mid = (low+high)/2;
                if(mid+str > (exp-mid)+it){
                    temp = mid;
                    high = mid-1;
                }
                else low = mid+1;
            }
            cout<<exp-temp+1<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;
}