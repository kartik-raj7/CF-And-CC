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
    string s;int k;
    cin>>s>>k;
    map<int,int>mp;
    int count = 0;
    int n = s.size();
    int ans = INT_MIN;
    int j = 0;
    int c= 1;
    for(int i=0;i<n-k+1;i++){
      mp[s[i]]++;
      count+=pow(s[i]-'a'+1,1);
      c=1;
      for(int j=i+1;j<n;j++){
        mp[s[j]]++;
        c++;
        if(mp[s[j]]>1){
          count+=(pow(s[j]-'a'+1,mp[s[j]])-pow(s[j]-'a'+1,mp[s[j]]-1));
        }
        else{
          count+=pow(s[j]-'a'+1,1);
        }
        if(c==k){
        ans=max(ans,count);
        mp.clear();
        count=0;
        c=1;
        break;
      }
    }
    
}
cout<<ans<<endl;
}
  
