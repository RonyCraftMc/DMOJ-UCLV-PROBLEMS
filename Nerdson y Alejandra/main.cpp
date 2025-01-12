#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

const int MOD = 1e9+7;

string b = "#papa";

void solve(){

int n; cin>>n;
string a; cin>>a;
a = '-' + a;

vector<vector<int>>mtx(14,vector<int>(1e5+20, 0));

for(int i = 0; i<=1e5+20; i++){
    mtx[0][i]=1;
}


for (int i = 1; i <= 4; i++){
    for(int j = 1; j<=n; j++){
        if(b[i]==a[j]){
            mtx[i][j]=(mtx[i][j-1]+mtx[i-1][j-1]);
            
        }
        else {
            mtx[i][j] = mtx[i][j-1];
            
        }
    }
}

cout<<mtx[4][n]<<endl;

}


Rony_Js main(){
   int t = 1;
    //cin>>t;
    while(t--)
    solve();

    return 0;
}