 //```
 /*        DMOJ-UCLV

Problema:N por 17 
Tematica: Teoria de numeros y Trabajo con cadenas

Idea: 

El problema nos pide calcular el resultado de N * 17, donde el numero n esta espresado
al igual que el resultado en base 2.

Hsta este momento la idea podria ser tan sencilla como: 

1. Convertir N de base binaria a base decimal
2. Multiplicarlo por 17
3  Convertir el resultado a binario e imprimirlo

Pero el problema nos puede dar un numero N con mas de 1000 digitos es decir el mayor numero
que nos pueden dar si lo llevamos a base 10 seria 2^999 lo que no cabe en ninguna variable en 
el lenguaje C++, aunque lo podemos representar como una cadena es decir tenemos la posibilidad
de trabajarlo como string;

En principio podemos directamente convertir 17 a binario y multiplicar directamente pero esa idea
se puede simplificar aun mas, teniendo en cuenta que:

17 = 2^4+2^0;
17 = 2^4+1;

y 2^4 en binario es : 10000
la multiplicacion seria:

(N * 16(en base 2 osea 10000))+N

y multiplicar por una potencia de 10 es agregar '0';
despues de multiplicar al resultado le sumas N e imprimimos la solucion 


*/
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;


void solve(){

    string a,b;

    cin>>a;
    b = a;
    for (int i = 0; i < 4; i++)
    {
        a.push_back('0');
    }
    int n  = a.size();
    int m = b.size();
    int dif = n-m;
    for(int i = 0; i< dif ; i++){
        b = '0'+b;
    }
    m = b.size();
    int c = 0;
    for(int i = a.size(); i>=0;i--){
            if(i<m|| c!=0){
            int x; int z;
            x=a[i]-'0'+c;
            z=b[i]-'0';
            c = 0;
            
            if(x+z==3){
                c = 1;
                a[i]='1';
            }
            else if(x+z==2){
                c = 1;
                a[i]='0';
            }
            else if(x+z==1) {
                   a[i]='1'; 
            }
            else a[i]='0';
        }
    }
    if(c!=0)a = '1'+a;
    bool trust = false;
    for(int i = 0 ; i<a.size(); i++)
        if(a[i]!='0' || trust == true){
            cout<<a[i];
            trust = true;
        }       


}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}