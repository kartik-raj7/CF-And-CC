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
       ll n;
       cin>>n;
       ll arr[n];
       map<int,int>mp;
       loop(i,0,n){
        cin>>arr[i];
        mp[arr[i]]++;
       }
       int count =0;
       int k = 0;
       for(auto i:mp){
        if(i.second>=1)count++;
        
       }
    //    if(count==0)cout<<n<<endl;
    if((n-count)%2==1)count--;
    cout<<count<<endl;
    //    for(auto i:mp){
    //     if(i.second>count){
    //         count=i.second;
    //         k=i.first;
    //     }
    //    }
    //   mp[k]=0;
    //   for(auto i:mp){
    //     count-i.second;
    //     i.second=0;
    //   }
    //   int s=0;
      
    }
}