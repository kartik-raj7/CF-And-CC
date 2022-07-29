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
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    ll lsum = arr[0];
    ll rsum = 0;
    ll left = 1;
    ll right = n-1;
    while(left<right){
        lsum+=arr[left];
        rsum+=arr[right];
        left++;right--;
    }
    if(lsum<rsum){
        py;
    }
    else{
        pn
    }
    // while(left<right){
    //     if(arr[left]<=arr[right]){
    //         lsum+=arr[left];
    //         left++;
    //     }
    //     else{
    //         rsum+=arr[right];
    //         right--;
    //     }
    // }
    // if(lsum<rsum){
    //     py;
    // }
    // else{
    //     pn;
    // }
    // if(n%2==0){
    //     for(ll i=0;i<=n/2;i++){
    //         sum2+=arr[i];
    //     }
    // }
    // else{
    //     ll sum2=0;
    //     for(ll i=0;i<=n/2;i++){
    //         sum2+=arr[i];
    //     }
    //     // cout<<sum<<" "<<sum2<<endl;
    //     if(sum2<(sum-sum2)){
    //         py;
    //     }
    //     else pn;
    }
   }
