#include <bits/stdc++.h>
#define int long long
#define Rony_Js signed 
#define endl '\n'

using namespace std;

Rony_Js main(){

    int n; cin>>n;
    int k; cin>>k;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int suamigo = 0, rodrigo = 0;
    sort(a.begin(),a.end());
    for(int i = 1 ; i<n; i++){
        suamigo+=a[i]-a[i-1];
        rodrigo++;
        if(suamigo>=k)break;
        //cout<<suamigo<<endl;
        
    }
    cout<<rodrigo<<endl;



    return 0;
}