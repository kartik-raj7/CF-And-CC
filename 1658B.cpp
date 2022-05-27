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
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
// unsigned int factorial(ll n)
// {
//     ll res = 1, i;
//     for (i = 2; i <= n; i++)
//         res *= i;
//     return res;
// }
int main(){
   test{
      ll n;
      cin>>n;
    if(n%2==1){
        puts("0");
    }
    else{
     ll ans =1;
     ll res = 1, i;
    for (i = 1; i <= n/2; i++){
        ans *= 1LL * i * i % 998244353;
        ans%=998244353;}
    //  for(int i=1;i<)
    //   cout<<factorial(n/2)<<endl;
    cout<<ans<<endl;
    }
    // loop(i,0,n){

    // }
    }
      }


