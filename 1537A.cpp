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
    test{
       int n;
       cin>>n;
       int arr[n];
       loop(i,0,n){
        cin>>arr[i];
       }
       sort(arr,arr+n);
       if(n==2){
        cout<<arr[0]<<" "<<arr[1]<<endl;
       }
       else{
       int maxi = INT_MAX;
       int k =0;
       for(int i=1;i<n;i++){
           if(maxi>(arr[i]-arr[i-1])){
            k=i;
            maxi = arr[i]-arr[i-1];
           }

       }
        
       for(int i=k;i<n;i++){
        cout<<arr[i]<<" ";
       }
      for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl;
       }
    }
}
    //    if(n%2==0){
    //     int k = n/2;
    //     for(int i=0;i<k;i++){
    //         cout<<arr[k-i-1]<<" "<<arr[n-i-1]<<" ";
    //     }
    //     cout<<endl;
    //    }
    //    else{
    //     int k = n/2+1;
    //     cout<<k<<endl;
    //      for(int i=1;i<k;i++){
    //         cout<<arr[k-i]<<" "<<arr[n-i]<<" ";
    //     }
    //     cout<<arr[0]<<endl;