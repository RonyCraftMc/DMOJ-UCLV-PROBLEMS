#include <bits/stdc++.h>
#define endl '\n'


using namespace std;

struct datos{
    char s = ' ';
    int peso = 0;
    bool vis = false;
    bool vis2 = false;

};

//const int MOD = 1e9+7;
int n, m;


datos info[200][200];

vector<int> mov_x = {0,1,0,-1};
vector<int> mov_y = {1,0,-1,0};
 
bool validcell(int x, int y){
    if((x>=0 && y>=0) && (x<n && y<m)){ 
     if( info[x][y].s!='*' && !info[x][y].vis && !info[x][y].vis2 )return true;
        else return false;
    } else return false;
}

void bfs(int x, int y){
    queue<pair<int,int>>q;
    q.push({x,y});
    while(!q.empty()){
        pair<int,int>idx = q.front();
        q.pop();
        int x1 = idx.first, y2 = idx.second;
        if(info[x1][y2].vis)continue;
        info[x1][y2].vis=true;
        for(int i = 0; i<4; i++){
           // cout<<"1\n";
            int x3 = x1 + mov_x[i], y3 = y2 + mov_y[i];
            if(validcell(x3, y3)){
                    info[x3][y3].peso = info[x1][y2].peso+1;
                    info[x3][y3].vis2 = true;
                    q.push({x3,y3});
                   // cout<<x3<<" "<<y3<<endl;           
            }
        }
    }
}


void solve(){

    int x,y,x1,y1;
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
            cin>>info[i][j].s;
            if(info[i][j].s=='B'){
                x=i;
                y=j;
            }else if(info[i][j].s=='C'){
                x1=i;
                y1=j;
            }
        }
    }
     bfs(x,y);
    
    if(info[x1][y1].peso==0){
        cout<<"0";
    }else{
        int peso = info[x1][y1].peso;
        cout<<peso<<endl;
    }



}


int32_t main(){
    //int t;
    //cin>>t;
    //while(t--)
    solve();

    return 0;
}