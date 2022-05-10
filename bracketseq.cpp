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
        int n;
        cin>>n;
        string str;
         cin>>str;
         int i=0;int c=0;
       while(i<n-1){
           if(str[i]=='('){
                 c++;
                 i+=2;
           }
           else{
               int j=i+1;
               while(j<n&&str[j]=='(')j++;
               if(j==n){
                   break;
               }
               c++;
               i=j+1;
           }

       }
       cout<<c<<" "<<n-i<<endl;
    }
}