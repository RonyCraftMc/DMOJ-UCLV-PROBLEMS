#include <bits/stdc++.h>
#define endl '\n'
#define elif else if
#define Rony_Js signed 

using namespace std;


vector<vector<bool>>graph(10,vector<bool>(10, false));
int mov_x[]={ 1, 1, 2, 2};
int mov_y[]={-2, 2,-1, 1};


bool valid(int z, int w){
    return (z<=8 && z>=0 && w>=0 && w<=8);
}

void bfs(int x, int y){

    queue<pair<int,int>>q;
    q.push({x,y});
    while(!q.empty()){
        pair<int,int>idx = q.front();
        q.pop();
        x = idx.first; y = idx.second;
        if(graph[x][y])continue;
        graph[x][y] = true;
        for(int i = 0; i<4; i++){
            int x1 = x+mov_x[i]; int y1 = y+mov_y[i];
            if(valid(x1,y1)){
                q.push({x1,y1});
            }
        }
        

    }

}

void solve(){
    int x,y,x1,y1;
    cin >> x >> y >> x1 >> y1;
    x--;
    y--;
    x1--;
    y1--;
    bfs(x,y);
    if(graph[x1][y1])cout<<"yes\n";
    else cout<<"no\n";
}


Rony_Js main(){
    
    int t = 1;
    //cin>>t;
        while(t--)
            solve();

 return 0;
}