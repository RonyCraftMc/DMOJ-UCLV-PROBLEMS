#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

struct kk
{
    bool vis = false;
};

map<pair<int,int>, kk>visit;



void solve(){
    
    int a,b; cin >> a >> b;
    if(a<b)cout<<a<<endl;
    else if(a==b)cout<<0<<endl;
    else {
        int resto = a%b;
        cout<<resto<<endl;
    }
}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}