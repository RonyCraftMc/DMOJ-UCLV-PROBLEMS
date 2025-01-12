#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

const int MOD = 1e9+7;

void solve(){

    string a,b;
    int n1; cin>>n1; int m1; cin>>m1;
    cin>>a>>b;
    int n = a.size(); int m = b.size();
    vector<vector<int>>mtx(n+10,vector<int>(m+10));
    for(int i = 0; i<=n; i++){
        mtx[i][0]=0;
    }
    for(int i = 0; i<=m; i++){
        mtx[0][i] = 1;
    }
   
   for(int i = 1; i<=n; i++){
    for(int j = 1; j<=m; j++){
        if(a[i-1] == b[j-1]){
            mtx[i][j]=mtx[i][j-1]+mtx[i-1][j-1];
            mtx[i][j]%=MOD;
        }else {
            mtx[i][j]=mtx[i][j-1]%MOD;
        }
        //cout<<mtx[i][j]<<' ';
    }
    //cout<<endl;
   }
    cout<<mtx[n][m]%MOD<<endl;
}


Rony_Js main(){

    solve();

    return 0;
}