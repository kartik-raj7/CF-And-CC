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
        set<int> s;
        int arr[n];
        map<int,int>mp;
        int aux=INT_MIN;
        loop(i,0,n){
            cin>>arr[i];
            mp[arr[i]]++;
            int k = mp[arr[i]];
            aux=max(k,aux);
            s.insert(arr[i]);
        }
        sort(arr,arr+n);
        if(n==1)cout<<0<<endl;
        // else if(s.size()==n){
        //     cout<<1<<endl;
        // }
        // else if(s.size()==1){
        //     cout<<0<<endl;
        // }
        else{
            int ans =s.size();
            if(ans==aux){
                cout<<ans-1<<endl;
            }
            else cout<<min(ans,aux)<<endl;
                        // int ans = n-s.size();
            // cout<<ans<<endl;
    }
}
}