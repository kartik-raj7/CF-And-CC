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
        vector<int> v;
        loop(i,0,n){
            int x;
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        for(int i=n/2;i<n;i++)
  	   {
        if(i != (n-i-1))
  	   	cout<<v[i]<<" "<<v[n-i-1]<<" ";
  	   	else 
  	   	  cout<<v[i]<<" ";
		 }
  	  cout<<endl;
       }
}