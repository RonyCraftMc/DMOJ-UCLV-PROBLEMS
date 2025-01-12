#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

void solve(){

        int n;
        cin>>n;
        vector<int>a(n);
        int s = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        if(n<2)cout<<"Tie"<<endl;
        else if(n%2==0)cout<<"First"<<endl;
        else if(n%2==1)cout<<"Second"<<endl;




}


Rony_Js main(){

    int t = 1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}