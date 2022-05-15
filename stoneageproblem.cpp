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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
ll n,q,t,m,x,sum,p=0;
map<long,long> mm;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		long long tmp;
		cin>>tmp;
		sum+=tmp;
		mm[i]=tmp;
	}
	for(int i=0;i<q;i++)
	{
		cin>>t;
		if(t==1)
		{
			cin>>m>>x;
			if(mm[m])
			{
				sum+=(x-mm[m]);
				mm[m]=x;
			}
			else
			{
				sum+=(x-p);
				mm[m]=x;
			}
			cout<<sum<<endl;
		}
		else if(t==2)
		{
			cin>>x;
			mm.clear();
			p=x;
			sum=x*n;
			cout<<sum<<endl;
		}
	}
}