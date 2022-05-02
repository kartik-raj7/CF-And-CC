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
   cin>>a;int first = a[0]-'a',second = a[1]-'a';
   if(first==0){
    cout<<(first*25)+second<<endl;
    }
    else if(second<first){
         cout<<(first*25)+second+1<<endl;
     }
    else if(second-first==1){
         cout<<(first*25)+second<<endl;
     }
     
    else cout<<(first*25)+second<<endl;}
        return 0;
        }