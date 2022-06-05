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
    ll n;
    cin>>n;
    ll arr[n];
    ll cpy[n];
    ll aux[n];
    ll c=1;
    ll sum=0;
    ll zero=0;
    ll one=0;
// loop(i,0,n){
//     cin>>arr[i];
// }
    loop(i,0,n){
        cin>>arr[i];
        if(arr[i]==0)zero++;
        if(arr[i]==1)one++;
    }
    ll k = (pow(2,zero))*one;
    c=k*one;
    cout<<k<<endl;
    // if(zero==0){
    //     cout<<one<<endl;
    // }
    // else cout<<2*zero*one<<endl;
    // else if(one==zero){
    //     cout<<one+zero<<endl;
    // }
    // else cout<<one+zero+1<<endl;
    // int target=sum-1;
    // sort(arr,arr+n);
    // for(int i=0;i<n-1;i++){
    //    aux[i] = arr[i]+arr[i+1];
    // }
    // for(int i=0;i<n;i++){
    //     c+= count(aux,aux+n,target-arr[i]);
    // }
    // if(zero>0){
    //     cout<<c+1<<endl;
    // }
    // else {cout<<c<<endl;}
   }
   }