#include <iostream>
#include <vector>
#include <map>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;ll sum=0;
cin>>n;map<ll,ll> m;
vector<int> v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
}
if(sum*2%n){
cout<<0<<endl;continue;
}
sum=sum*2/n;
	ll ans=0;
	for(ll i=0;i<n;i++){
		ans+=m[sum-v[i]];
		m[v[i]]++;
	}
	cout<<ans<<endl;
	}
}
