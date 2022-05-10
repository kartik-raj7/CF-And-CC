#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
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
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
test{
int n; cin>>n; int Arr[n]; int x;
  for (int i=0;i<n;i++){
      cin>>Arr[i];
  }
  sort(Arr,Arr+n);
  int sum=0;
  for (int i=1;i<n;i++){
     x=(Arr[i]-Arr[0]);
     sum+=x;
  }
  cout<<sum<<endl;
    }

return 0;}