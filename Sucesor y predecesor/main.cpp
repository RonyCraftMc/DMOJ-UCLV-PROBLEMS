 //```
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;


void solve(){
    int n;
    string sol;
    cin>>n;
    if((2*n) % 3==0)
        sol = string((n*2)/3,'7');
    
    else if((2*n) % 3==1)
        sol = "1"+string(floor((n*2)/3),'7');
    
    else
        sol = "3"+string(floor((n*2)/3),'7');
    
    cout<<sol<<'\n';
}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}