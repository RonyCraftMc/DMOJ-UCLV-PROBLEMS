 //```
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;



void solve(){

    int n; cin>>n;
    int m = n%10;
    int d = n/10;
    cout<<d*n+m<<endl;

}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}