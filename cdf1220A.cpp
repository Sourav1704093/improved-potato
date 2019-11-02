#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        priority_queue<int, vector<int>,greater<int>>q;
        int n,x;
        cin>>n;
        while(n--){
            cin>>x;
            q.push(x);
        }
        bool check = false;
        while(q.size()){
            int eq = q.top();
            q.pop();
            if(eq == 2048){
                check = true;
                break;           
            }
            else if(eq > 2048){
                check = false;
                break;
            }
            if(q.size()){
                int eq1 = q.top();
                q.pop();
                if(eq1== 2048){
                    check = true;
                    break;
                }
                else if(eq == eq1){
                    q.push(eq+eq1);
                }
                else q.push(eq1);
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    //if(check) cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
    return 0;
}