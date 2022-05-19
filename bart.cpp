#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
using namespace std;
int minimum_pair(int arr[],int cpy[],int n){
sort(cpy,cpy+n);
int mini = cpy[1]-cpy[0];
for(int i=2;i<n;i++){
    mini = min(mini,cpy[i]-cpy[i-1]);
}
return mini;
}
int displaypairs(int arr[],int n){
    pair<int,int> p;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
         cout<<arr[i]<<" "<<arr[j]<<endl;
    }
}
}
int sort_it(int arr[],int n){
    int a = count(arr,arr+n,0);
    int b = count(arr,arr+n,1);
    int c = count(arr,arr+n,3);
    if(a+b+c==n){
        sort(arr,arr+n);
    }
    else cout<<"elements are not present"<<endl;
}
int main(){
int n;
cin>>n;
int arr[n];
int cpy[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    cpy[i]=arr[i];
}
cout<<minimum_pair(arr,cpy,n)<<endl;
displaypairs(arr,n);
sort_it(arr,n);
}