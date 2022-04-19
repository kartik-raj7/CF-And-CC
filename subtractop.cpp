#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
         cin >> n >> k;
         bool flag = false;
     	ll arr[n];
     	map<ll,ll> m;
     	loop(i, 0, n) {
     		cin >> arr[i];
     		m[arr[i]]++;
     	}
     	loop(i,0,n){
     		if(m.find(arr[i]+k) != m.end()) {
     			flag = true;
     			break;
     		}
     		else if(m.find(arr[i]-k) != m.end()){
     			flag = true;
     			break;
     		}
     	}
 
     	if(flag) cout << "YES";
     	else cout << "NO";
     	cout << endl;
 
       
    }
}