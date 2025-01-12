#include <bits/stdc++.h>
#define endl '\n'
#define int long long 
using namespace std;

signed  main(){
	
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>k>>n;
		if(1+n>=k){
			if(k==n+1)cout<<n<<endl;
			else if (k==n) cout<<n+1<<endl;
            else cout<<n<<endl;
			}
			
		else cout<<0<<endl;
		}
	return 0;
	}