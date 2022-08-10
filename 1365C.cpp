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
#include <unordered_map>
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
    map<int,int>mp;
    int arr[n];
    // map<int,int> ans;
    int ans =0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr[k]=i;
    }
    int k = 0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        mp[(arr[k]-i+n)%n]++;
        // int s = (i-mp[k]);
        // if(s<0){
        //     mp[k] = n-i+mp[k];
        // }
        // else mp[k] = (i-mp[k]);
    }
    for(int i=0;i<n;i++){
       int aux = mp[i];
       ans = aux>ans?aux:ans;
        // cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
    }
    cout<<ans<<endl;
}