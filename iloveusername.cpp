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
map<string,string>mp;
 int n,m;
 cin>>n;
 int arr[n];
 loop(i,0,n){
     cin>>arr[i];
 }
 int maxi = arr[0],mini=arr[0];
 int c=0;
 loop(i,1,n){
     if(arr[i]>maxi){
         c++;
         maxi =arr[i];
     }
     if(arr[i]<mini){
         c++;
         mini=arr[i];
     }
 }
 cout<<c<<endl;
}