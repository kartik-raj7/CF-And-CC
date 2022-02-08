#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
#define ll long long
#define pb push_back
using namespace std;
#define ll long long  
void solve()
{
	ll i,n,c=0;
	cin>>n;
	ll a[n+1];
	a[0]=0;
	for( i=1;i<=n;i++)
	cin>>a[i]; 
	sort(a,a+n+1);
	vector<ll>v;
	
	map<ll,ll>m;
	for(i=1;i<=n;i++)
	{
		if(a[i]<=n&&m[a[i]]==0)
		m[a[i]]=1;
		else
		v.push_back(a[i]);
	}
	int k=0;
	for(i=1;i<=n;i++)
	{
		if(m[i]==0)
		{
			if(k<v.size()&&v[k]>i*2)
			k++;
			else
			{
				cout<<"-1\n";
				return;
			}
		} 
		
	}
	cout<<k<<endl; 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	solve();
}