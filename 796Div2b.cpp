#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
    ll n;ll ans;ll position;
    cin>>n;
   if(n==1){
       cout<<3<<endl;
   }
   else if(n%2!=0){
       cout<<1<<endl;
   }
   else if(ceil(log2(n)) == floor(log2(n))){
       cout<<n+1<<endl;
   }
   else {ans = pow(2,log2(n&-n));
   cout<<ans<<endl;}
//    else{
//        int binaryNum[32];
 
//     // counter for binary array
//     int i = 0;
//     while (n > 0) {
 
//         // storing remainder in binary array
//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
//      ll k  = log2(n & -n) + 1;
// // while (n& 1 ==0)
// // {
// //     cnt++;
// //     n>>=1;
// // }
// // cout<<cnt<<endl;
   }
   }