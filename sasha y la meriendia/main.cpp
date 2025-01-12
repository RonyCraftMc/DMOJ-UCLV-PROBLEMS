#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

void solve(){
    
    int n , c1;
    cin>>n>>c1;
    vector<int>fr(n);
    for(int i = 0; i<n; i++){
        cin>>fr[i];
    }
    int rodrigo = LONG_MIN;
    for(int i = 0; i<n;i++){
        int s = 0; int c = 0;
        for(int j = i; j<n; j++){
            if(s+fr[j]<=c1){
                s+=fr[j];
                c++;
                
            }
                
            else if(s==c1)break;
            
        }
        rodrigo = max(rodrigo,c);
    }
    cout<<rodrigo<<endl;


}


Rony_Js main(){

    int t = 1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}