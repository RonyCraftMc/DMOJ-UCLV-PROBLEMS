#include <bits/stdc++.h>
#define int long long 
#define Rony_Js signed
#define endl '\n'

using namespace std;

vector<bool>Cryba(1e7, true);



void cryba(){
    Cryba[0] = false;
    Cryba[1] = false;
    for(int i = 2; i < 100; i++){
        if(Cryba[i]){
            for(int j = i+i; j<1e7; j+=i){
                Cryba[j] = false;
            }
          //  cout<<i<<endl;
        }
        
    }
    
}


Rony_Js main(){

    int a;
    cin>>a;
    int c = 0;
    vector<bool>Si(1e7, false);
    cryba();
    for(int i = 2; i<=a; i++){
        if(Cryba[i]){
            if(Cryba[a-i]==true && Si[i] == false)c++;
            Si[a-i] = true;
           // cout<<i<<" "<<a-i<<endl;
        }
    }
    cout<<c<<endl;

    return 0;
	}