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
#include <queue>
#include <stack>
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
// int v[999999];
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
   int n,q;
   cin>>n>>q;
   vector<int>aux;
   vector<int>arr;
   for(int i=1;i<=n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<=n;i++){
    cout<<arr[i]<<endl;
   }
//    loop(i,1,n){
//     int x;
//     cin>>x;
//     arr.pb(x);
//    }
//    aux[1] = 0;
//    for(int i=2;i<=n;i++){
//     aux[i]=arr[i]-arr[i-1];
//    }
//    for(auto i:arr){
//     cout<<i<<" ";
//    }
   while(q--){
    int a,b;
    cin>>a>>b;
    ll sum = 0;
    ll aux1;
    if(a<b){
        for(int i=a;i<=b;i++){
            if(aux[i]<0){
              sum+=aux[i];
            }
            else aux1+=aux[i];
        }
    }
    if(b<a){
        for(int i=b;i<a;i++){
            if(aux[i]>0){
                sum+=aux[i];
            }
            else aux1+=aux[i];
        }
    }
    cout<<sum<<endl;

   }
}