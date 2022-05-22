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
       int n;
       cin>>n;
       string s;
       cin>>s;
       string cpy = s;int ans=1;
       ll mid = n/2;
       ll j= mid-1;
       while(j>=0&&s[j]==s[j+1]){
           j--;ans++;
       }

    //    for(int i=mid-1;i>=0;i--){
    //        if(s[i]==s[i+1]){
    //            ans++;
    //        }
    //    }
    //    for(int i=mid+1;i<n;i++){
    //        if(s[i]==s[i-1]){
    //            ans++;
    //        }
    //    }
    j=mid+1;
    while(j<n&&s[j]==s[j-1]){
        j++;
        ans++;
    }
       cout<<ans<<endl;
    //    reverse(cpy.begin(),cpy.end());
    //    if(cpy!=s){
    //        cout<<0<<endl;
    //    }
    //    else if(count(s.begin(),s.end(),s[0])==s.length()){
    //        cout<<s.length();
    //    }
    //    else{
    //        int low = 0,high = s.length()-1;

    //        }
       }
}