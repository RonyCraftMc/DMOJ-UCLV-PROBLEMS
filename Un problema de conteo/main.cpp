#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

int Ndivisors(int n){
    int rodrigo = 1;
    for( int i = 2; (int)i * i<=n; i++){
        if(i%2==0){
            int e = 0;
            do{
                e++;
                n/=i;
            }while(n%i==0);
            rodrigo *= e + 1;
        }
    }

    if(n>1) rodrigo *= 2;
    return rodrigo;
}

void solve(){

    int n;
    cin>>n;
    cout<<Ndivisors(n);


}


Rony_Js main(){

    int t = 1;
    cin>>t;
    while(t--)
        solve();

    return 0;
}