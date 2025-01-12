#include <bits/stdc++.h>
#include <bitset>
#define endl '\n'
#define Rony_Js signed 
#define int long long 
#define Valido return 0

using namespace std;
int TC = 1;

vector<int>primes;


void Cryba(){
    std::bitset<50000010>p;
    for (int i=2; i <= 5; ++i) {
        if (p[i] == 0) {
            p[i] = 1;  
            primes.push_back(i);
            cout<<i<<endl;
        }
        for (int j=0; j < (int)primes.size() && i*primes[j] <= 5*1e7; j++) {
            p[i * primes[j]] = 1;
        }
    }
}




void solve(){
        
        int a,b;
        cin>>a>>b;
        int x = upper_bound(primes.begin(),primes.end(),a);
        int y = lower_bound(primes.begin(),primes.end(),b);
        int sol = y - x + 1;
        cout<<"Test Case #"<<TC<<": "<<sol<<endl;
        TC++;
}

Rony_Js main(){
	Cryba();
    int t = 1;
    cin>>t;
    while(t--)
        solve();

	
	
	
	
	Valido;
	}