#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        int odd=0,even=0;
        loop(i,0,n){
            cin>>v[i];
            if(v[i]%2==0)even++;
            else odd++;
        }
        int k=0;
        if(x%2==0){
            k=x/2;
        }
        else k = (x+1)/2;
        // int k = ceil(n/2);
        int s = n-k;
        // cout<<k<<s;
        if(x==1){
            if(odd>=1){
                py;
            }
            else pn;
        }
        else if((n==x && odd%2==0) || (n==odd && x%2==0) || odd==0){ pn;}
        else py;
        // else if(even>=k&&odd>=s){
        //     py;
        // }
        // else pn;
        // }}
        }
        return 0;
        }
        