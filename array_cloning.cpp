#include <iostream>
#include <math.h>
#include <algorithm>
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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
   int n;
   cin>>n;int c=0;
   map<int,int> v;
   loop(i,0,n){
       int k;
       cin>>k;
       v[k]++;
   }
		int am = 0;
		for (auto i : v) {
			am = max(am, i.second);//max freq character
		}
		int ans = 0;
		while (am < n)
		{
			int d = min(n - am, am);
			ans += 1 + d;
			am += d;
		}
		cout << ans << endl;}
        return 0;}
//    if(v.size()=1){
//        cout<<0<<endl;
//    }
//    else if(count(v.begin(),v.end(),v[0])==v.size()){
//        cout<<0<<endl;
//    }
//    else{
//       ll s = c,ck=0;
//       while(s<c){
//           ck++;
//           if(s+c>n){
//               ck=ck+(n-s);break;
//           }
//           else {
//               s=s+c;
//               ck+=c;
//               c=s;

//           }
//       }
//       cout<<ck<<endl;
//    }
// return 0;
// }
// for (auto i : q) {
// 			am = max(am, i.second);
// 		}
// 		int ans = 0;
// 		while (am < n)
// 		{
// 			int d = min(n - am, am);
// 			ans += 1 + d;
// 			am += d;
// 		}
// 		cout << ans << endl;