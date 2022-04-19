#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;int p1=0,p2=0;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
        p1 =  distance(arr, max_element(arr, arr+n));
        p2=   distance(arr, min_element(arr, arr+n));
    if(p1>p2){
        cout<<p2+1<<" "<<p1+1<<endl;
    }
    else cout<<p1+1<<" "<<p2+1<<endl;
}
}