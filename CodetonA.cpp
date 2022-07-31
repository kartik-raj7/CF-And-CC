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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n,m;
        cin>>n>>m;
        string a, b;
        cin>>a>>b;
        bool flag = true;
        char ch =b[0];
        // int az = count(a.begin(),a.end(),'0');
        // int a1 = count(a.begin(),a.end(),'1');
        // int bz = count(b.begin(),b.end(),'0');
        // int b1 = count(b.begin(),b.end(),'1');
        // for(int i=m-1;i>=0;i--){
        //     if(a[m])
        // }
        int az = count(a.begin(),a.end()-m+1,ch);
        string k = b.substr(1,m-1);
        string p = a.substr(n-m+1,n-1);
        if(k!=p){
            flag = false;
        }
        if(flag==true&&az>0){
            py;
        }
        else pn;
        // cout<<k<<" "<<p;
        // if(k!=p){
        //     pn;
        // }
    }
}