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
int main(){
   test{
      int n;
      cin>>n;int c=0;int k=0;
      int arr[n];
      vector<pair<ll,ll>> v;int cpy1[n],cpy2[2];
      loop(i,0,n){
          cin>>arr[i];
      }
      int brr[n];
      loop(i,0,n){
          cin>>brr[i];
      }
    //   sort(cpy1,cpy1+n);
    //   sort(cpy2,cpy2+n);
      int i, j, mini;
    for (i = 0; i < n-1; i++)
    {
        // mini = i;
        for (j = i+1; j < n; j++){
       if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
        swap(brr[i],brr[j]);
        v.pb({i,j});}
        else if(arr[i]==arr[j]&&brr[i]>brr[j]){
        swap(arr[i],arr[j]);
        swap(brr[i],brr[j]);
        v.pb({i,j});
        }
    }}
    for(int i=0;i<n-1;i++){
        if(brr[i+1]<brr[i]){
           k=-1;break;
        }
    }
    if(k==-1){
        puts("-1");
    }
    else{
        cout<<v.size()<<endl;
        for(auto i:v){
           cout<<i.second+1<<" "<<i.first+1<<endl;
        }
    }
}
}