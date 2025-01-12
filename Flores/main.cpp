#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;

struct kk
{
    bool vis = false;
};

map<pair<int,int>, kk>visit;



void solve(){

    int n;
    cin>>n;
    int j = LONG_MIN;
    vector<pair<int,int> >eje;
    vector<bool>valid(1e5, false);
    for(int i = 1; i <= n; i++){
        int a,b;
        cin>>a>>b;
        int k = max(a,b);
        j = max(k,j);
        valid[a]=true;
        valid[b]=true;
        eje.push_back(make_pair(a,b));

        int c = 0;
        if(valid[a]){
            
                for(int x = 0; x<eje.size(); x++){
                    if(eje[x].first<a && eje[x].second>a && !visit[{b,x+1}].vis){
                     visit[{b,x+1}].vis = true;
                        c++;
                    }
                }
                
            }
                    if(valid[b]){
            
                for(int x = 0; x<eje.size(); x++){
                    if(eje[x].first<b && eje[x].second>b && !visit[{b,x+1}].vis){
                        c++;
                        visit[{b,x+1}].vis= true;
                        }
                }
                
            }
            cout<<c<<endl;
    }

    

    



}


Rony_Js main(){

    int t = 1;
    //cin>>>t;
    while(t--)
        solve();

    return 0;
}