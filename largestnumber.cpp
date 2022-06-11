#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#define pb push_back
#include <queue>
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
 int n;
 cin>>n;
 string s = to_string(n);
 int i=0,j=s.length()-1;
 priority_queue<char>even,odd;

 for(int i=0;i<s.length();i++){
   if((s[i]-'0')%2==0){
        even.push(s[i]);
   }
   else odd.push(s[i]);
 }
 for(int i=0;i<s.length();i++){
     if((s[i]-'0')%2==0){
         s[i]=even.top();
         even.pop();
 }
 else s[i]=odd.top();
      odd.pop();
 }
 cout<<s<<endl;
}