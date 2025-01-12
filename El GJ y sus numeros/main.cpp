/*
        DMOJ-UCLV

Problema: El granjero Juan y sus numeros
Tematica: Teoria de numeros y Dynamic Programing

Idea:

El problema nos pide encontrar en el intervalo [A;B] los numeros que son divisibles entre 1 y el mismo numero
osea la cantidad de primos que existen en ese intervalo, la idea es la siguiente utilizando una Cryba y una preffix 
sum calcular todos los numeros primos desde 2, que es el primer primo hasta el peor de los caso que es, 10^6(+10 por si acaso)
podemos aprovechar la Cryba y dentro de la misma hacer el preffix sum para disminuir la complejidad del programa quedando en O(N log N) 
ya que cada consulta es en O(1).



*/

#include <bits/stdc++.h>
#define endl '\n'


using namespace std;

//const int MOD = 1e9+7;

vector<bool>cryba(1e6,true);
vector<int>ps(1e6,0);


void Cryba(){

    for(int i = 2; i<1e6; i++){
        if(cryba[i]){
            ps[i] = ps[i-1]+1;
            for(int j = i+i ; j  <= 1e6; j+=i)
                cryba[j]=false;
        }
        else{ 
            ps[i] = ps[i-1];
        }
    }


}


void solve(){

    int a,b;
    cin>>a>>b;
    cout<<ps[b]-ps[a-1]<<endl;
 
}


int32_t main(){
    Cryba();
    int t;
    cin>>t;
    while(t--)
    solve();

    return 0;
}