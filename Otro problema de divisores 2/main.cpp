#include <bits/stdc++.h>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define int long long
#define Rony_Js signed


using namespace std;

int n;

int mGCD(vector<int>x){

    int rodrigo = x[0];
    sort(all(x));
    int su_amigo = -1;
    for(int i = 1; i<n; i++){

        int r = __gcd(r,x[i]);
        su_amigo = max(su_amigo, r);
    }

    return su_amigo;

}


Rony_Js main(){

    
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i< n ; i++)cin>>a[i];

    int rodrigo = mGCD(a);

    cout<<rodrigo<<endl;

    return 0;

}