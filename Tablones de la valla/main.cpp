#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed 
#define all(x) x.begin(),x.end()

using namespace std;

const int MOD = 1e9+7;


void solve(){

int n, k;
cin>>n>>k;
int a;
vector<int>ps(n+10, 0);

for(int i = 1; i<=n; i++){
    
    cin>>a;
    ps[i] = ps[i-1] + a;
    //cout<<ps[i]<<endl;
    
}
int rodrigo = LONG_MAX;
int su_amigo;
for(int i = 0; i<=n; i++){
    if(rodrigo>ps[i+k]-ps[i]){
        
        rodrigo = ps[i+k] - ps[i];
        //cout<<i+1<<endl;
        su_amigo = i+1;
    
    }
    if(i+k >=n)break;
    //cout<<ps[i+k]-ps[i]<<endl;

}

cout<<su_amigo<<endl;


}




Rony_Js main(){
    int t = 1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}