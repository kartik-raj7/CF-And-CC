#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
     int a[30];
     int b[30];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		ll ans=0;
		for(int i=1;i<=n-1;i++){
			ans+=min(abs(a[i]-a[i+1])+abs(b[i]-b[i+1]),abs(a[i]-b[i+1])+abs(b[i]-a[i+1]));
		}
		// cout<<ans<<endl;
//     // set<int> a;
//     // set<int> b;
//     // vector<int>a(n);
//     // vector<int>b(n);
//     int a[40];
//     int b[40];
//     loop(i,0,n){
//         // int x;
//         // cin>>x;
//         // a.insert(x);
//         cin>>a[i];
//     }
//     loop(i,0,n){
//         // int x;
//         // cin>>x;
//         // b.insert(x);
//         cin>>b[i];
//     }
// //   loop(i,0,n){
// //       if(a[i]>b[i]){
// //           swap(a[i],b[i]);
// //       }
// //   }
//   int suma=0,sumb=0;
// //   loop(i,0,n-1){
// //     if((b[i+1]-b[i])<0){
// //        swap(a[i+1],b[i+1]);
// //     } 
//     // suma+=abs(a[i+1]-a[i]);
//     // sumb=abs(b[i+1]-b[i]);
// //   }
//   int ans=0;
//   loop(i,0,n-1){
//     ans+=min(abs(a[i+1]-a[i])+abs(b[i+1]-b[i]),abs(a[i+1]-b[i])+abs(b[i+1]-a[i]));
//     // suma+=abs(a[i+1]-a[i]);
//     // sumb+=abs(b[i+1]-b[i]);
//   }

 cout<<ans<<endl;

    }
return 0;
}