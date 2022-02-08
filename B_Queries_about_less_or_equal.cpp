#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;
int32_t main(){
int n,m;int p;
cin>>n>>m;
int k;int a[n];
for(int i=0;i<n;i++){
   cin>>a[i];
}
vector <int> v(a,a+n);
sort(v.begin(),v.end());
while(m--){
   vector<int>::iterator lower;
    cin>>p;
    lower = lower_bound(v.begin(), v.end(),p);
    cout<<(lower - v.begin() + 1)<<" ";
}
return 0;}
