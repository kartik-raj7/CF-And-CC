#include<iostream>
#include <algorithm>
#define ll long long
using namespace std;
long long arr[110];
 int main(){
    int t;
	cin>>t;
	while(t--){
	    ll n,l,r,k,s,p,ans;
		cin>>n>>l>>r>>k; s=0; ans=0;
		for(int j=0;j<n;j++){
			cin>>p;
			if(p>=l && p<=r)
             arr[s++]=p;
		}
		sort(arr,arr+s);
		for(int i=0;i<s;i++){
		    if(arr[i]<=k){
               ans++;
		       k-=arr[i];
		       
		    }
		}
		cout<<ans<<endl;
	}
	return 0;
}