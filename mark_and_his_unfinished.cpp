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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int size,q,n;
        cin>>size>>q>>n;
        string str;
        cin>>str;
        while(q--){
            int a;int b ;
            cin>>a>>b;
            a--;
            string c=str.substr(a,b-a);
            str+=c;
            
        }
        while(n--){
            int sp;
            cin>>sp;
            cout<<str[sp-1]<<endl;
        }
    }
}