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
    int n;
     cin>>n;
     if(n==2){
        cout<<2<<endl;
        cout<<1<<" "<<2<<endl;
     }
     else if(n==3){
        cout<<3<<endl;
        cout<<2<<" "<<1<<" "<<3<<endl;
     }
     else{
     vector<int> v1;
     vector<int> v2;
     vector<int>v3;
     v3.push_back(1);
     vector<int>v4;
     int two=0;int three=0;
     for(int i=1;i<=n;i++){
        if(i%2!=0){
        int k = i;
        while(k<=n){
            // v1.push_back(i);
            v1.push_back(k);
            k*=2;
        }
        // v1.push_back(i);
     }
     }
     cout<<2<<endl;
      for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
      }
    //  for(int i=1;i<=n;i++){
    //     cout<<v1[i]<<" ";
    //  }
     }
   }
}
        //    if((i*2)<=n){
        //     v1.push_back(i);
        //     v1.push_back(i*2);
        //     // two++;
        //    else v1.push_back(i);
    //  for(int i=1;i<=v2.size();i++){
    //     v1.push_back(v2[i]);
    //  }
         //     if(i%3==0)s.push_back(i);
    //  }
    //  for(int i=2;i<=n;i++){
    //     if(i%3!=0)s.push_back(i);
    //  }
    //  cout<<3<<endl;
    // //  for (auto it = s.begin(); it != s.end(); ++it)
    // //     cout << ' ' << *it;
    // for(int i=0;i<n;i++){
    //     cout<<s[i]<<" ";
    // }