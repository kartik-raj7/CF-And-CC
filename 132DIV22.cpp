#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
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
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
 int n,q;
 cin>>n>>q;
 int arr[n];
 map<int,int>mp;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int aux[n];
 int aux2[n];
 for(int i=0;i<n-1;i++){
    int x = arr[i]-arr[i+1];
    aux[i] = max(0,x);
 }
 for(int i=0;i<n-1;i++){
    int x = arr[i]-arr[i+1];
    aux[i] = max(0,x);
 }
 for(int i=n-1;i>=0;i--){
    int x = arr[i]-arr[i+1];
    aux[i] = max(0,x);
 }
//  for(int i=0;i<n;i++){
//     cout<<aux[i]<<" ";
//  }
ll k =0;
for(int i=0;i<n;i++){
    ll a = aux[i];
    aux[i] = k;
    k+=a;
}
for(int i=0;i<n;i++){
    ll a = aux[i];
    aux[i] = k;
    k+=a;
}
//  for(int i=0;i<n;i++){
//     cout<<aux[i]<<" ";
//  }
while(q--){
   int a,b;
   cin>>a>>b;
   if(a<b){
    cout<<aux[a-1]-aux[b-1]<<endl;
   }
   else cout<<-aux[a-1]+aux[b-1]<<endl;
}
}