#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed 
#define all(x) x.begin(),x.end()
using namespace std;


void solve(){

    int n,k;
    cin>>n>>k;
    vector<int>a(n+10);
    vector<int>c(5+10, 0);
    for(int i = 0; i<n; i++){
        int x; 
        cin>>x;
        a[i] = x;
        c[x]++;
    }
    if(c[k]==1)cout<<-1<<endl;
    else{   
        
        int l;
        vector<int>sol;
        for(int i = 0; i<n; i++){
            if(a[i]==k){
                l = i;
                break;
            }
        }

        for(int i = l+1; i<n ; i++){
            if(a[i]==k){
                sol.push_back(abs(l-i));
                l = i;
            }
        }
        if(sol.size()!=0){
        sort(all(sol));
        cout<<sol[0]-1<<endl;
        }
        else cout<<-1<<endl;

    }


}




Rony_Js main(){
    int t = 1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}