#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#define pb push_back
#include <map>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n==2){
			cout<<"-1"<<endl;
            continue;
		}
		ll sq=pow(n,2);
		ll x=1;
		loop(i,0,n){
			loop(j,0,n){
				cout<<x<<" ";
				if(x+2>sq&&sq>=2) x=2;
				else x+=2;
			}
			cout<<endl;
		}
	}
	return 0;
}
