/*

         DMOJ-UCLV

Problema: Bread Counting
Tematica: Dynamic Programing

Idea:

El problema nos pide saber cuantas vacas, de las 3 razas que existen hay en un [l, r] intervalo del ordenamiento
la idea es sencilla, vamos a aplicar el algoritmo de preffix sum para saber cuantas vacas de cada raza 
existen desde el inicio hasta la i-th posición, esta informacion la vamos a guardar en tres vectores
para que sea mas sencillo. Despues nos van a hacer Q queries o consultas, en cada querie imprimiremos el intervalo
que nos piden, que anteriormente ya habia sido guardada.




*/
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed 
#define all(x) x.begin(),x.end()

using namespace std;

const int MOD = 1e9+7;


void solve(){


int n, q; cin>>n>>q;
vector<int>a(n+10, 0);
vector<int>b(n+10, 0);
vector<int>c(n+10, 0);

for(int i = 1 ; i<=n; i++){
    
    int x; cin>>x;
    
    if(x==1)a[i] = a[i-1]+1;
    else a[i] = a[i-1];

    if(x==2)b[i] = b[i-1]+1;
    else b[i] = b[i-1];
    
    if(x==3)c[i] = c[i-1]+1;
    else c[i] = c[i-1];
    
    // 2cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<endl;
}

while(q--){
    int f,g; cin>>f>>g;
    cout<<a[g]-a[f-1]<<' '<<b[g]-b[f-1]<<' '<<c[g]-c[f-1];
    cout<<endl;

}


}




Rony_Js main(){
    int t = 1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}