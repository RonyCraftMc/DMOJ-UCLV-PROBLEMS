#include <bits/stdc++.h>
#define endl '\n'
#define int long long 

using namespace std;

const int mod = 1e9+7;


signed main(){
	
	int n, s=1;
	cin>>n;
	
	for(int i =0; i<n; i++){
		
		s*=2;
		s%=mod;
		
		
		}
		cout<<s<<endl;
	
	return 0;
	}