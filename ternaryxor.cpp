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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
      ll n;
      cin>>n;
    string str;
    cin>>str;
    string k(n,'0'),s(n,'0');
    loop(i,0,n){
     if(str[i]=='1'){
         k[i]='1';
         s[i]='0';
        for(int j=i+1;j<n;j++){
            s[j]=str[j];
        }break;}
        else{
            k[i]= '0' + (str[i] - '0') / 2;
            s[i]= '0' + (str[i] - '0') / 2;
        }}
    cout<<k<<endl;
    cout<<s<<endl;
    }
      }


