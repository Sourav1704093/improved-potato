#include<bits/stdc++.h>
using namespace std;
/*int is_balanced(char str[], int n){
    char stack[105],last_char;
    int top = 0;
    for(int i = 0; i < n;i++){
        if(str[i] == '('){
            stack[top] = '(';
            top++;
        }
        else if(str[i] == ')'){
            if(top == 0){
                return 0;
            }
            top--;
            last_char = stack[top];
            if(last_char != '('){
                return 0;
            }
        }
    }
    if(top == 0) return 1;
    else return 0;
}*/

int main(){
    int n;
    cin>>n;
    /*char str[105];
    for(int i = 0; i < n; i++) cin>>str[i];
    if(is_balanced(str,n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;*/
    string str;
    cin>>str;
    int count = 0;
    bool check = false;
    for(int i = 0; i < n; i++){
        if(str[i] == '(') count++;
        else count--;
        //cout<<count<<endl;
        if(count < -1) check = true;
    }
    if(count) check = true;
    if(!check) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}
