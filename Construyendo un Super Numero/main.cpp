#include <iostream>
#include <string>
#define int long long
#define MOD 34047161064
using namespace std;


string n;
int d, v, k, sum ;

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> v >> k >> n;
    
	d = n.size();
	k--;
	while(k--)
		d = ((d - 1) * n.size() + d) % MOD;
	cout << d << '\n';
	if (v == 2) {
            sum = stoi(n);
		    (sum%3==0) ? cout << "Si" : cout << "No";
	} 
	return 0;
}