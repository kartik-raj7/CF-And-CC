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
#include <queue>
#include <stack>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("No");
#define py puts("Yes");
#define test ll t; cin>>t; while(t--)
#define ll long long
// int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
   const int cons = 1e6;
    int dp[cons];
    int k =1,sol,aux;
    string str;
    vector<int> v;
    
int main(){
    // string str;
    cin>>str;
    int n = str.size();
    
    // stack<char>q;
    // // int c=0;
    // // int maxi =0;
    // int k=1;
    // int aux;
    // vector<int> v;
    // int sol;
 
       for(int i=0;i<n;i++)
       {
        if(str[i]=='(') 
                v.pb(i);
        else if(v.size()&&str[i]==')'){

            aux = v[v.size()-1];
            dp[i] = i-aux+1+dp[aux-1];
            if(sol==dp[i]){
               k++;
            }
            if(sol<dp[i]){
                sol = dp[i];
                k=1;
            }
            v.pop_back();
        }
       }
       cout<<sol<<" "<<k<<endl;
}
    // q.push(str[0]);
    // int i=1;

    // while(i<n){
    //  if(q.empty()&&i<n){
    //     q.push(str[i]);
    //     i++;
    //  }
    //  else if(q.top()=='('&&str[i]==')'){
    //     q.pop();
    //     c+=2;
    //     i++;
    //  }
    //  else{
    //     q.push(str[i]);
    //     if(c>0){
    //         k++;
    //         maxi=max(c,maxi);
    //         c=0;
    //     }
    //     i++;

        
    //  }
    // }
    // if(maxi==0&&k==0){
    //     cout<<0<<" "<<1<<endl;
    // }
    // else cout<<maxi<<" "<<k<<endl;
    // }
    ////////////////////////////
    // string s;
    // cin>>s;
    // int l=s.length();
    // int t=0;
    // int ans=0,c=1;
    // for(int i=0;i<l;i++)
    // {
    //     if(s[i]=='(') stck[++t]=i;
    //     else if(t)
    //     {
    //         a[i]=i-stck[t]+1+a[stck[t]-1];
    //         t--;
    //         if(ans==a[i]) c++;
    //         if(ans<a[i]) ans=a[i],c=1;
    //     }
    // }
    // cout<<ans<<" "<<c;
    ////////////////////////////////////////