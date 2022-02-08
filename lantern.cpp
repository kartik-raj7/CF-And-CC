#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    int l,n;
    cin>>n>>l;
    double arr[n],sol;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    sol=0;
    sol = max(sol,arr[0]);
    sol = max(sol,l-arr[n-1]);
    for(int i=0;i<n-1;i++){
        double p = arr[i+1]-arr[i];
        p/=2.0;
        sol=max(sol,p);
    }
    cout<<fixed<<setprecision(10)<<sol<<endl;
    }