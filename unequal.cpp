#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
    ll t;
    //t=1;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     int v[n];
     int k = 0,p=0;
     for(int i=1;i<=n;i++){
			cin>>v[i];
		}
		for(int i=1;i<=n;i++){
			if(v[i]==v[i+1]){
				k=i;
				break;
			}
		}
		for(int i=n;i>=1;i--){
			if(v[i]==v[i-1]){
				p=i;
				break;
			}
		}
		if(p-k>1){
			if(p-k>3){
				cout<<p-k-2<<endl;
			}else{
				cout<<1<<endl;
			}
		}
        else{
			cout<<0<<endl;}   //  loop(i,1,n){
    //      cin>>v[i];
    //  }
    // int k = -1,p = -1;
    // loop(i,1,n){
    //     if(v[i]==v[i-1])k=i;break;
    // }
    // for(int i=n-2;i>=0;i--){
    //     if(v[i]==v[i+1]){
    //         p=i;break;
    //     }
    // }
    // if(p<k)puts("0");
    // else if(p==-1||k==-1)puts("0");
    // else if(p==k)puts("1");
    // else cout<<(p-k)<<endl;
    }
    return 0;}