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
        int n;
        cin>>n;
        // vector<ll>v(n,vector<ll>(n,0));
        char ch[n][n];
        loop(i,0,n){
            loop(j,0,n){
                cin>>ch[i][j];
            }
        }
        bool flag = true;
        loop(i,0,n-1){
            loop(j,0,n-1){
                if(ch[i][j]=='1'){
                    if(ch[i][j+1]=='0'&&ch[i+1][j]=='0'){
                        flag=false;
                        break;
                    }
                //     if(i==0&&j<=n-1){
                //        if(ch[i][j+1]!=)
                //     }
                //   if(ch[i-1][j]!=1||ch[i][j+1]!='1'){
                //     flag = false;
                //     break;
                //   }
                }
            }
        }
        if(flag){
            py;
        }
        else pn;
}
}