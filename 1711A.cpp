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
        vector<int> ans;
        ans.pb(2);
        if(n==1)cout<<1<<endl;
        else if(n==2)cout<<2<<" "<<1<<endl;
        else{
        for(int i=2;i<n;i++){
            ans.pb(i+1);
        }
        ans.pb(1);
        for(auto i:ans){
            cout<<i<<" ";
        }}
    }
}