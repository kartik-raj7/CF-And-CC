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
    int n,m;
    cin>>n>>m;
    int arr[n*2];
    bool flag = true;
    vector<int> aux1;
    vector<int> aux2;
    for(int i=0;i<(2*n);i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    // if(n==1){
    //     cout<<arr[0]<<arr[1]<<endl;
    //     if(arr[1]-arr[0]<m)flag = false;
    // }
    // else{
    for(int i=0;i<n;i++){
        if(arr[i+n]-arr[i]<m)flag = false;
    }
    if(flag){py;}
    else pn;
    // for(int i=0;i<(2*n);i++){
    //     cout<<arr[i]<<" ";
    // }
    // for(int i=0;i<(2*n);i++)
    // sort(arr,arr+n);
    // vector<int> aux1;
    // vector<int> aux2;
    // for(int i=0;i<n;i++){
    //     aux1.pb(arr[i]);
    // }
    // for(int i=n;i<2*n;i++){
    //     aux2.pb(arr[i]);
    // }
    // sort(aux1.begin(),aux1.end());
    // sort(aux2.begin(),aux2.end());

    // // int k = n/2;
    // bool flag = true;
    // for(int i=0;i<n;i++){
    //     if(aux2[i+n]-aux1[i]<m)flag =false;break;
    // }
    // // bool flag = true;
    // // // }
    // if(flag){
    //    py;
    // }
    // else pn;
    }
}