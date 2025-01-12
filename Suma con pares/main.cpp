#include <bits/stdc++.h>
#define endl '\n'
#define Rony_Js signed
#define int long long 

using namespace std;

Rony_Js main(){
	
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i = 0; i<n; i++)cin>>a[i];
	int x;
	cin>>x;
	int c = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			
			if(a[i]+a[j]==x){
				a[i]=0;
				a[j]=0;
				c++;
                break;
			}
			
			}
		}
	cout<<c<<endl;
	
	
	
	return 0;
	}