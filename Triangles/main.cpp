#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed 
#define all(x) x.begin(),x.end()

using namespace std;

const int MOD = 1e9+7;


void solve(){

    int p;
    cin>>p;
    int rodrigo = 0;
    for(int a = 1; a < p; a++){
        for (int b = 1; b  < p; b++)
        {
            float s = sqrt((a*a)+(b*b));
            int c = floor(s);
            if(a+b+c == p)rodrigo++;
        }
        
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