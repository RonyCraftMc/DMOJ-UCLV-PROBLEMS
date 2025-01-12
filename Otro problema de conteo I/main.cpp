#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

vector<int>cuad(1e6+10,1);

void fun(){
    int rodrigo = 1;
    for(int i = 2 ; i<=1e6; i++){
        int k = sqrt(i);
        if(k * k == i)rodrigo++;

        //cout<<rodrigo<<' '<<i<<endl;

        cuad[i]=rodrigo;
    }
}

void solve(){
    
    int n; cin>>n;
    int k = sqrt(n);
    int g = floor(k);
    cout<<g<<endl;
}


Rony_Js main(){
    fun();
    int t = 1;
    cin>>t;
    while(t--)
        solve();

    return 0;
}