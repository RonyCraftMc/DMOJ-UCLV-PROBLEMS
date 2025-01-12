#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

void solve(){

    int n; cin >> n;
    queue<int>q;
    stack<int>s;
    stack<int>f;
    for(int i = 1; i<=n; i++){
        q.push(i);
    }
    while(!q.empty() || !s.empty()){
        int a,b; cin >> a >>b;
        if(a==1){
            for(int i = 0; i<b; i++){
                s.push(q.front());
                q.pop();
            }
        }
        if(a==2){
            for(int i = 0; i<b; i++){
                f.push(s.top());
                s.pop();
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<f.top()<<endl;
        f.pop();
    }

}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}