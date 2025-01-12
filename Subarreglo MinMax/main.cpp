 //```
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

int MinMax(vector<int>a, int nmax, int nmin){
    int n = a.size();
    vector<int>sol;
    for(int i = 0; i<n; i++){
        if(a[i]==nmax){
            for (int j = i; j < n; j++)
            {
                if(a[j]==nmin){
                    sol.push_back(abs(j-i));
                    break;
                }
            }
            
        }
        if(a[i]==nmin){
            for (int j = i; j < n; j++)
            {
                if(a[j]==nmax){
                    sol.push_back(abs(j-i));
                    break;
                }
            }
        }
    }
    sort(sol.begin(),sol.end());
    return sol[0];

}

void solve(){

    int n; cin >> n;
    vector<int>a(n);
    vector<int>sol;
    int l; int r;
    int rodrigo = LONG_MIN , su_amigo = LONG_MAX;
    for(int i = 0; i < n; i++){
        cin>>a[i];

        rodrigo = max(rodrigo,a[i]);
        
        su_amigo = min(su_amigo, a[i]);
        
    }
    cout<<MinMax(a,rodrigo,su_amigo)+1<<endl;

}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}