#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

vector<int>mov_x = {0,0,-1,1};
vector<int>mov_y = {1,-1,0,0};
vector<int>rodrigo(1,0);

void solve(){

    int n;
    cin>>n;
    string ch; cin>>ch;
    int x=0,y=0;
    
    for(int f = 0 ; f<n; f++){
        int su_amigo = 1;
        for(int i = f; i<n; i++){
               
        if(ch[i]=='U'){
            x+=mov_x[0];
            y+=mov_y[0];
        }
        else if(ch[i]=='D'){
            x+=mov_x[1];
            y+=mov_y[1];
        }
        else if(ch[i]=='L'){
            x+=mov_x[2];
            y+=mov_y[2];           
        }
        else if(ch[i]=='R'){
            x+=mov_x[3];
            y+=mov_y[3];
        }

        if(x==0 && y==0){
            rodrigo.push_back(su_amigo);
        }
        su_amigo++;
        }
    }
    sort(rodrigo.rbegin(),rodrigo.rend());
    cout<<rodrigo[0]<<endl;
}


Rony_Js main(){

    int t = 1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}