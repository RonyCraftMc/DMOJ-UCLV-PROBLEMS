#include <bits/stdc++.h>
#define endl '\n'
#define Rony_Js signed
#define int long long

using namespace std;

void solve(){

    int n; cin >> n;
    int sum = n*(n+1)/2;
    int s=0;
    bool trust = false;
    for(int i = 1; i<=n; ++i){
        int a; 
        cin>>a;
        s+=a;
        int k = i*(i+1)/2;
        if(s>=k)trust = true;
        else{
            trust = false;
            break;
        }

    }
    if(trust && s == sum)cout<<"Si\n";
    else cout<<"No\n";

}

Rony_Js main(){

    int t = 1;
    //cin>>t;
    while (t--)
    solve();
    


    return 0;
}
