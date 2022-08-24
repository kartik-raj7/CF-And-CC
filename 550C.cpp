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
    string n;
    cin>>n;
    bool flag = false;
    int ans=0;
    map<int,int>mp;
    for(auto it:n){
        mp[(it-'0')]++;
    }
    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    if(mp[8]>=1){
        py;
        cout<<8<<endl;

    }
    else if(mp[0]>=1){
        py;
        cout<<0<<endl;
    }
    else{
      for(int i=0;i<n.size();i++){
        for(int j=i+1;j<n.size();j++){
           for(int k= j+1;k<n.size();k++){
              int a = (n[i]-'0')*100;
              int b = (n[j]-'0')*10;
              int c = n[k]-'0';
              int a1 = (n[i]-'0')*10;
              int b1 = n[j]-'0';
              int b2 = (n[j]-'0')*10;
              if((a+b+c)%8==0){
                flag = true;
                ans=a+b+c;
                break;
              }
              else if((a1+b1)%8==0){
                flag = true;
                ans=a1+b1;
              }
               else if((a1+c)%8==0){
                flag = true;
                ans=a1+c;
              }
               else if((b2+c)%8==0){
                flag = true;
                ans=b2+c;
              }
           }
        }
      }
      if(flag){
        py;
        cout<<ans<<endl;
      }
      else pn;
    }
}