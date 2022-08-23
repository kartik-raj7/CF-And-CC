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
#include <vector>
#include <numeric> 
#include <algorithm>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t;  while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        ll n,l,r;
        cin>>n>>l>>r;
        ll arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        ll counter=0;
        int left =0,right=n-1;
        sort(arr,arr+n);
        ll low = n-1;
        ll high = n-1;
        ll ind = 0;
        while(ind<high){
            low = (low>ind)?low:ind;
            while(ind<low&&arr[ind]+arr[low]>=l){
                low--;
            }
            while(low<high&&arr[ind]+arr[high]>r){
                high--;
            }
            counter+=(high-low);
            ind++;
        }
        cout<<counter<<endl;
    }

                // while(left<right){
        //     int mid = (left+right)/2;
        //    if(arr[left]+arr[mid]<l){
        //     left++;
        //    }
        //    else if(arr[left]+arr[mid]>=l&&arr[left+arr[mid]<=r]){
        //     counter++;
        //     mid++;
        //    }
        //    else if(mid==n-1){
        //     left++;
        //     right--;
        //    }
        //    else{
        //     left++;
        //     right--;
        //    }
            // if(arr[left]+arr[right]>r){
            //     right--;
            // }
            // else if(arr[left]+arr[right]>=l&&arr[left]+arr[right])
        // cout<<counter<<endl;
    }