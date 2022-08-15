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
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
           int n;
           cin>>n;
           ll arr[n];
        //    int arr[n];
        //    loop(i,0,n){
        //     cin>>arr[i];
        //    }
           if(n==1){
            cout<<1<<endl;
           }
           else{
            for(int i=0;i<n;i++){
                arr[i]=i+1;
                }
        //    if(n%2==0){
            for(int i=n-1;i>0;i-=2){
                swap(arr[i],arr[i-1]);
            }
        //    }
        //    else{
        //     for(int i=2;i<n;i++){
        //         swap(arr[i],arr[i-1]);
        //     }
        //    }
           for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
           }
           cout<<endl;    
        //    }
    }
}
}