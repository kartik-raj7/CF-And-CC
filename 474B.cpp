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
    int n;
    cin>>n;
    ll arr[n];
    ll aux[n];
    // cin>>arr[1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //   arr[i]+=arr[i-1];
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    
    //     if(i==1){
    //         aux[i]=arr[i];
    //     }
    //     else{
    //         aux[i]= aux[i-1]+arr[i];
    //     }
    // }
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        cout<<lower_bound(arr,arr+n,q)-arr+1<<endl;
    }
    //     aux[i]=aux[i-1]+arr[i];
    // }
}