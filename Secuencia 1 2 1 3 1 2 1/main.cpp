#include <bits/stdc++.h>
#include <bitset>
#define endl '\n'
#define Rony_Js signed 
#define int long long 
#define Valido return 0

using namespace std;
string  x;
string SecuenciaN(int n){
    int k = n;
    if(k==1){   
        x="1";
        return x;
    }
    else{
        string j = to_string(k);
        x = SecuenciaN(k-1) + ' ' + j + ' ' + SecuenciaN(k-1);
        return x;
    }



}


void solve(){

    int n; cin>>n;
    cout<<SecuenciaN(n)<<endl;


}

Rony_Js main(){

    int t = 1;
//   cin>>t;
    while(t--)
        solve();
	Valido;
	}