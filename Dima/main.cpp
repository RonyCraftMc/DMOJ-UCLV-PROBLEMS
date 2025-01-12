#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

const int MOD = 1e9+7;


void solve(){

    int n;
    cin>>n;
    int a = 0,b;
    int rodrigo = 0;
    for(int i = 0; i<n; i++){
        cin>>b;
        rodrigo += abs(a-b);
        a = b;
    }
    cout<<rodrigo<<endl;

}


Rony_Js main(){
   int t = 1;
    //cin>>t;
    while(t--)
    solve();

    return 0;
}