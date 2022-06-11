#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
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
   int n;
   cin>>n;
   int arr[n];
   int index[n];
   for(int i=1;i<=n;i++){
    cin>>arr[i];
    index[i]=i;
   }
   if(n==1){
       cout<<-1<<endl;
   }
   else{
   for(int i=1;i<n;i++){
       if(arr[i]==index[i]){
           swap(index[i],index[i+1]);
       }}
       if(arr[n]==index[n]){
           swap(index[n],index[n-1]);
       }
   for(int i=1;i<=n;i++){
       cout<<index[i]<<" ";
   }
   cout<<endl;}
   }
   
   
   }