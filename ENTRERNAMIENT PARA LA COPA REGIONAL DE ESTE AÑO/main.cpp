#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed
#define all(x) x.begin(),x.end()

using namespace std;

int i;


Rony_Js main(){

    int s = 0;
    bool x = false;
    vector<int>a(3);
    for(i = 0; i<3; i++){

        cin>>a[i];
        s+=a[i];
        if(a[i]%3==0&&a[i]!=9){
                cout<<a[i]<<endl;
                x = true;
                break;
        }
    }
    sort(all(a));

    if(!x){
 i = 0;
        if((a[i])%3==0){
            cout<<a[i]<<endl;
        }
        else if((a[i+2])%3==0){
            cout<<a[i+2]<<endl;
        }
        else if((a[i+1])%3==0){
            cout<<a[i+1]<<endl;
        }
        else if((a[i]+a[i+1])%3==0){
            cout<<a[i]<<a[i+1]<<endl;
        }
        else if((a[i]+a[i+2])%3==0){
            cout<<a[i]<<a[i+2]<<endl;
        }
        else if((a[i+1]+a[i+2])%3==0){
            cout<<a[i+1]<<a[i+2]<<endl;
        }
        else if((a[i]+a[i]+a[i])%3==0){
            cout<<a[i]<<a[i]<<a[i]<<endl;
        }
        else if((a[i+1]+a[i+1]+a[i+1])%3==0){
            cout<<a[i]<<a[i]<<a[i]<<endl;
        }
        else if((a[i+2]+a[i+2]+a[i+2])%3==0){
            cout<<a[i]<<a[i]<<a[i]<<endl;
        }
    }




    return 0;
}#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed
#define all(x) x.begin(),x.end()

using namespace std;

int i;


Rony_Js main(){

    int s = 0;
    bool x = false;
    vector<int>a(3);
    for(i = 0; i<3; i++){

        cin>>a[i];
        s+=a[i];
        if(a[i]%3==0&&a[i]!=9){
                cout<<a[i]<<endl;
                x = true;
                break;
        }
    }
    sort(all(a));

    if(!x){
 i = 0;
        if((a[i])%3==0){
            cout<<a[i]<<endl;
        }
        else if((a[i+2])%3==0){
            cout<<a[i+2]<<endl;
        }
        else if((a[i+1])%3==0){
            cout<<a[i+1]<<endl;
        }
        else if((a[i]+a[i+1])%3==0){
            cout<<a[i]<<a[i+1]<<endl;
        }
        else if((a[i]+a[i+2])%3==0){
            cout<<a[i]<<a[i+2]<<endl;
        }
        else if((a[i+1]+a[i+2])%3==0){
            cout<<a[i+1]<<a[i+2]<<endl;
        }
        else if((a[i]+a[i]+a[i])%3==0){
            cout<<a[i]<<a[i]<<a[i]<<endl;
        }
        else if((a[i+1]+a[i+1]+a[i+1])%3==0){
            cout<<a[i]<<a[i]<<a[i]<<endl;
        }
        else if((a[i+2]+a[i+2]+a[i+2])%3==0){
            cout<<a[i]<<a[i]<<a[i]<<endl;
        }
    }




    return 0;
}



//```
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
    //cout<<a<<endl;
    int dif = n-m;
    for(int i = 0; i< dif ; i++){
        b = '0'+b;
    }
    m = b.size();
    //cout<<b<<endl;
    int c = 0;
    for(int i = a.size(); i>=0;i--){
            if(i<m|| c!=0){
            int x; int z;
            x=a[i]-'0'+c;
            z=b[i]-'0';
            //cout<<x+z<<endl;
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
    //cout<<endl;
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


#include <bits/stdc++.h>
#define endl '\n'
#define Rony_Js signed 
#define int long long 
#define Valido return 0;
#define debug(x) cout<<x<<endl ;
#define debugPair(x) cout<<x.first<<" "<<x.second<<endl;

using namespace std;

struct Node
{
    
    vector<int>v;
    int ring = 0;
    int pos;    
    int vis = false;

};

vector<Node>graph(1e5);
vector<bool>vis(1e5, false);
vector< pair<int,int> >maxi;
map<int , int>cont;

void bfs(){


    queue<int>q;
    q.push(1);
    graph[1].vis = true;
    while(!q.empty()){
        int idx = q.front();
        q.pop();
        if(vis[idx])continue;
        vis[idx] = true;
        for(auto & to: graph[idx].v){
           q.push(to);
            if(graph[to].vis)continue;
            graph[to].vis = true;
            graph[to].ring = graph[idx].ring+1;
            maxi.push_back(make_pair(graph[to].ring,graph[to].pos*-1));
            cont[graph[to].ring]++;
            //debug(maxi[to]);
           // cout<<graph[to].ring<<" "<<graph[to].pos*-1<<endl;
        }
    }
}

Rony_Js main(){

int n, m; cin>>n>>m;

for(int i = 0; i<m; i++){

    int a, b;
    cin>>a>>b;
    graph[a].v.push_back(b);
    graph[b].v.push_back(a);

    graph[a].pos = a;
    graph[b].pos = b;

}

bfs();

    sort(maxi.rbegin(),maxi.rend());
    cout<<maxi[0].second*-1<<" "<<maxi[0].first<<" "<<cont[maxi[0].first]<<endl;

	Valido;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    string a;
    getline(cin, a);
    while(t--){
        getline(cin, a);
        for(int i =0; i<a.size(); i++){
            if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
             {
                 cout<<'-';
             }
             else cout<<a[i];
        }
        cout<<endl;
    }
    
    return 0;
}