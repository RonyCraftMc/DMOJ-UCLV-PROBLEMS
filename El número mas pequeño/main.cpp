//```
/*
    DMOJ-UCLV

Problema: El numero más pequeño
Tematica: Ad Hoc

Idea:

El problema nos pide determinar el numero entero mas pequeño >= 1 que no puede ser representado 
con la suma de A B C

Creamos un vector con valores Booleanos y ponemos en verdadero todos los posibles resultados
despues iteramos desde el 1 hasta el i-th valor en falso del vector y cuando lo hagamos encontrado
imprimimos i.


*/


#include <bits/stdc++.h>
#define int long long 
#define Rony_Js signed
#define endl '\n'

using namespace std;

Rony_Js main(){

    int t = 3;
    while(t--){
        vector<int>a(3);
        map<int, bool>vis;
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
            vis[a[0]] = true;
            vis[a[1]] = true;
            vis[a[2]] = true;
            vis[a[0]+a[1]] = true;
            vis[a[0]+a[2]] = true;
            vis[a[1]+a[2]] = true;
            vis[a[2]+a[1]+a[0]] = true;
            for(int i = 1; i<=1e9;i++){
                if(!vis[i]){
                    cout<<i<<endl;
                    break;
                }
            }
        
    }



    return 0;
	}