 //```
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

const int MOD = 1e9+7;
int n, m;
int v = 0, o = 0;

vector<vector<char>>graph(500,vector<char>(500,'#'));
vector<vector<bool>>vis(500,vector<bool>(500,false));
vector<int>mov_x = {0, 0,1,-1};
vector<int>mov_y = {1,-1,0, 0};

bool validcell(int x, int y){
    return x>=0 && y>=0 && y<m && x<n && graph[x][y]!='#';
}

void bfs(int x , int y){
    
    queue<pair<int,int>>q;
    q.push({x,y});
    int v1=0,o1=0;
    while(!q.empty()){
        pair<int,int>idx = q.front();
        q.pop();
        x = idx.first; y = idx.second;
        if(vis[x][y])continue;
        vis[x][y] = true;
        if(graph[x][y]=='o')o1++;
        if(graph[x][y]=='v')v1++;
        for(int i = 0; i < 4 ; i++){
            int x1 = x+mov_x[i]; int y2 = y+mov_y[i];
            if(validcell(x1,y2)){
                q.push({x1,y2});
            }
        }
    }
    if(v1>=o1){
        v+=v1;
    }else{
        o+=o1;
    }
   // cout<<o<<' '<<v<<'\n';

}



void solve(){

    cin>>n>>m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
            cin>>graph[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
           if(!vis[i][j]){
                bfs(i,j);
            }
        }
    }

    cout<<o<<' '<<v<<'\n';

}


Rony_Js main(){

    solve();

    return 0;
}