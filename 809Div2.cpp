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
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
    test{
        int n;
        cin>>n;
        int arr[n];
        vector<int> v(n,0);
        map<int,vector<int>>mp;
        loop(i,1,n){
            cin>>arr[i];
            mp[arr[i]].pb(i);
        }
        for(auto i:mp){
            auto k =i.second;
            if(k.size()<=1) v[i.first-1]=k.size();
            
            else{int c=1;
            for(int j=1;j<k.size();j++){
                if(abs(k[j]-k[j-1])%2==1)c++;
            }
            v[i.first-1]=c;
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    }
    }