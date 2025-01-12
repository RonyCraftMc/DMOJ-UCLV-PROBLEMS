#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

const int MOD = 1e9+7;

map<int,int>Cryb;

void Cryba(){
    for(int i = 2; i<1e7; i++){
        for(int j =  i+i; j<1e7; j+=i){
            Cryb[j]++;
        }
    }
}

void debug(){
    int x;
    while (x!=-1)
    {
        cin>>x;
        cout<<Cryb[x]<<endl;
    }
    
}

void solve(){
    Cryba();
  //  debug();
    int n;
    cin>>n;
    int rodrigo = 0,suamigo = LONG_MAX;
    for(int i = 0; i<n; i++){

        int a;
        cin>>a;
        if(Cryb[a]>rodrigo){
                suamigo=a;
                rodrigo = Cryb[a];
        }else if(Cryb[a]==rodrigo){
            if(a<suamigo){
                suamigo = a;
            }
        }

   }
  cout<<suamigo<<endl;

}


Rony_Js main(){
   int t = 1;
   // cin>>t;
    while(t--)
    solve();

    return 0;
}