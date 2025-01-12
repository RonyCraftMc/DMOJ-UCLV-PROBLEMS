#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

void solve(){
    int i = 1;
    bool trust = false;
    int a,b,c;
    cin>>a>>b>>c;
    while(true){

        if(a==c*i+b){
            trust = true;
            break;
        }
        else if(a<c*i+b){
            break;
        }

        i++;
    }

    if(trust)cout << "YES\n";
    else cout << "NO\n";

}


Rony_Js main(){

    int t = 1;
    cin>>t;
    while(t--)
        solve();

    return 0;
}