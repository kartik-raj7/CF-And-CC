#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <limits.h>
#include <climits>
#include <iomanip>
#define pb push_back
using namespace std;
int main(){
int t;
cin>>t;
int n;
cin>>n;
int mins=INT_MAX;
int arr[n];
vector <int> v(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
    mins = min(mins,arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]%mins==0){
        v.pb(arr[i]);
        arr[i]=0;
    }
}
sort(v.begin(),v.end());
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        arr[i]=v[j];
        j++;
    }
}
int f = 0;
for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
      f=0;
    }
    else f=1; break;
}
if(f==0){
    cout<<"yes"<<endl;
}
else cout<<"no"<<endl;
}