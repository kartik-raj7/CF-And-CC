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
  string a;
  string b;
  cin>>a>>b;
  int n =b.size();
        int m=a.size();
        long long ans;
 
        if (n==1 && b[0]=='a') ans=1;
        else if (b.find('a')!=b.npos) ans=-1;
        else ans=pow(2,a.length());
 
        cout<<ans<<endl;
// int a1 = count(a.begin(),a.end(),'a');
// int b1 = count(b.begin(),b.end(),'a');
// if(a=="a"){
//     puts("1");
// }
// else if(b1==0){
//      cout<<pow(2,a1)<<endl;
// }
// else if(b.length()>1&&b1>=1){
//     puts("-1");
// }

//   if(count(b.begin(),b.end(),'a')==1&&b.length()==1){
//       puts("1");
//   }
//   else if((count(b.begin(),b.end(),'a')==1||count(b.begin(),b.end(),'a')>1)&&b.length()>1){
//       puts("-1");
//   }
//   else cout<<pow(2,a.length())<<endl;
    }
        return 0;
        }