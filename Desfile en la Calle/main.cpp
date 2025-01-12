//```
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;



void solve(int n){
    int num = 1;
    stack<int>q;
    for(int i = 0; i<n;i++){
        int idx;
        if(!q.empty())idx = q.top();  
        int a;
        cin>>a;
        if(a==num){
            num++;
        }else if(idx==num){
            num++;
            q.pop();
        }
        else {
            q.push(a);
        }
    }

    while(!q.empty()){
        int idx = q.top();
        if(idx == num){
            num++;
            q.pop();
        }else{
            break;
        }
    }

    if(q.empty())cout<<"yes\n";
    else cout<<"no\n";
}




Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(true){
        int n; cin>>n;
        if(n==0)break;
        solve(n);
    }
    return 0;
}