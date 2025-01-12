 //```

/*
        DMOJ-UCLV

Problema:Charcos de lodo 
Tematica: Teoria de Grafo(Breadth First Search(BFS))

Idea: El problema te pide hallar el camino minimo que debe seguir el granjero juan para
llegar a Bessie, su vaca, sin ensuciar sus zapatos, para esto nos ofrecen un mapa con las 
siguientes especificaciones, 'M': representa charcos de fango, '.':camino libre, 'B' Bessie
la vaca.

Cada punto en el mapa esta representado por una coordenada [{x;y}] que en el peor de los casos
puede ir desde -500 <= x,y <= 500.

La idea se basa en aplicar el algoritmo BFS sobre un tablero para que encontrar el camino minimo
de la coordenada [{0,0}] donde esta GJ hasta [{x,y}] donde esta Bessie, esto es posibleporque los 
pesos al ser constante, la primera vez que llegue al nodo donde esta Bessie ese sera el camino minimo.

Ojo para representar este grafo es recomendable utilizar la estructura del mapa porque las coordenadas
pueden llegar a ser negativas y como todos sabemos un vector no tiene indices negativos. Asi que usando
la idea del mapa podemos utilizar la clave del mapa para acceder a cada nodo.(Todo ventajas); 






*/



#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

const int MOD = 1e9+7;

struct node{

    char s = '.';
    int peso = 0;
    bool vis = false;
    bool vis2 = false;

};
map<pair<int,int>, node>graph;
vector<int>mov_x = {0,0,1,-1};
vector<int>mov_y = {1,-1,0,0};

bool valid(int x, int y){
    return x>=-500 && y>=-500 && x<=500 && y<=500 && graph[{x,y}].s!='M';
}
void bfs(int xf, int yf){

    queue<pair<int,int>>q;
    q.push({0,0});
    while(!q.empty()){
        pair<int, int> idx = q.front();
        int x = idx.first; int y = idx.second;
        q.pop();
        
        if(x==xf && y==yf)break;
        if(graph[{x,y}].vis)continue;
        graph[{x,y}].vis = true;
        for(int i = 0; i < 4 ; i++){
            int x1 = x+mov_x[i]; int y1 = y+mov_y[i];
            if(valid(x1,y1)){
                
                //cout<<x1<<' '<<y1<<endl;
                if(!graph[{x1,y1}].vis2){
                    graph[{x1,y1}].peso = graph[{x,y}].peso+1;
                    graph[{x1,y1}].vis2 = true;
                    q.push({x1,y1});
                    continue;
                }
            }
        }
    }


}




void solve(){

    int x , y; cin >> x >> y;
    int n; cin>>n;
    for(int  i = 0; i<n; i++){
        int a,b; cin >> a >> b;
        swap(a,b);
        graph[{a,b}].s = 'M';
    }
    swap(x,y);
    bfs(x , y);
    cout<<graph[{x,y}].peso<<endl;


}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}