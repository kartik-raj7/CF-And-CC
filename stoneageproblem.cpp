#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
int a[200010];
int b[200010];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
signed main(){
{  
    int n,m,sum = 0,c = 0,x = 0;
    cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=n; i++) sum += a[i];
	while(m--)
	{
		int s,s1,s2;
		cin >> s >> s1;
		if(s == 1)
		{
			cin >> s2;
			if(b[s1] == c) sum += (s2-a[s1]);
			else
			{
			    b[s1] = c;
			    sum += (s2-x);
			}
			cout << sum << endl;
			a[s1] = s2;
		}
		else
		{
			c++;
			x = s1;
			sum = s1 * n;
			cout << sum << endl;
		}
	}
	return 0;
}
}
// ll n,q,t,m,x,sum,p=0;
// ll arr[10000001];
// 	cin>>n>>q;
// 	for(int i=1;i<=n;i++)
// 	{
// 		cin>>arr[i];
// 		sum+=arr[i];
// 	}
// 	for(int i=0;i<q;i++)
// 	{
// 		cin>>t>>m;
// 		if(t==1){
// 			cin>>x;
// 			if(arr[m]){
// 				sum+=(x-arr[m]);
// 			}
// 			else{
// 				sum+=(x-p);
// 			}
// 			cout<<sum<<endl;
// 			arr[m]=x;
// 		}
// 		else{
// 			p = m;
// 			sum = m*x;
// 			cout<<sum<<endl;
// 		}
// 	}
// }