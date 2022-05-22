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
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
       int n;
       cin>>n;int ans=0,max=0;
       int arr[n];int cpy[n];
       loop(i,0,n){
           cin>>arr[i];
           cpy[i] = arr[i];
       }
       map<int,int>mp;
       vector<int> v;
       int k=-1;
       sort(cpy,cpy+n);
       for(int i=0;i<n;i++){
           if(arr[i]!=cpy[i]){
            k = k&arr[i];
        //    mp[k]++;
        // v.pb(k);
       }}
    //    for(int i=0;i<v.size()-1;i++){
    //        ans= v[i]&v[i+1];
    //     //    if(i.second>max){
    //     //        max=i.second;
    //     //        ans = i.first;
    //     //    }
    //    }
       cout<<k<<endl;
}
}