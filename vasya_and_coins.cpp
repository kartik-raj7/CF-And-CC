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
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int a,b;
        cin>>a>>b;
       if(a==0&&(b==0&&b>0)){
           cout<<1<<endl;
       }
       else if(a>0&&b>0){
           int c = a+(2*b)+1;
           cout<<c<<endl;
       }
       else cout<<a+1<<endl;
       }
    return 0;}