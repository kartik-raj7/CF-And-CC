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
    int n,m,q;
    cin>>n>>m>>q;
    string str1,str2;
    cin>>str1>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    map<int,int>mp,cp;
    string sol;
    int i=0,j=0;
    int c1=0,c2=0;
    vector<char>v;
    while(i<n&&j<m){
         if(str1[i]<str2[j]&&c1<q){
            sol+=str1[i];
            i++;
            c1++;
            c2=0;
           }
           else if(c2<q){
               sol+=str2[j];
               j++;
               c2++;
               c1=0;
           }
           else
             {
                 sol+=str1[i];
                 i++;
                 c2=0;
             }
    //      else{
    //         sol+=str2[j];
    //         j++;
    //         c2=1;
    //         c1=0;
    //        }
    //      }
    //      else{
    //        if(c2<q){
    //         sol+=str2[j];
    //         j++;
    //         c2++;
    //         c1=0;
    //        }
    //      else{
    //         sol+=str1[i];
    //         i++;
    //         c2=1;
    //         c1=0;
    //        }
    //      }
    // }
    //      cout<<sol<<endl;
    }
    cout<<sol<<endl;}
}