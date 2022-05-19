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
        string a;
        cin>>a;
        string b;
        b=a;
        char ans = '9';
        for(int i=0;i<a.length();i++){
            if(i=='0'){
                ans = a[0];
            }
            else ans = min(ans,a[i]);
        }
        if(a.length()==2){
             cout<<a[1]<<endl;
           }
           else cout<<ans<<endl;
    }
}