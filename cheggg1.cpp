#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int compute(){
  int x=1;
  while(x<100){
    x=x*-1;
    log(x);
  }
  return x;
}
int main(){
  // int n;//declaring variable to take number of values n from user
  // int arr[n];//declaring array of size n;
  // int sum=0;//initializing sum variable to take sum
  // cout<<"Enter the elements of Array"<<endl;
  // for(int i=0;i<n;i++){
  // 	arr[i]=rand();//running loop to take entry of values from user
  // }
  // for(int i=0;i<n;i++){
  // 	sum+=arr[i];
  // }
  // cout<<sum<<endl;
  cout<<compute()<<endl;
return 0;
}