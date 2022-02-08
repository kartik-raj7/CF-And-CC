#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;int f=0;
    if(n==1){
        cout<<"NO"<<endl;
    }
    else{
    for(int i=1;i*i<=n;i++){
        if(i*i==n){
            f=1;
            break;
        }
    }int c=0;
     int size = trunc(log10(n)) + 1;string k = to_string(n);
     for(int i=0;i<size;i++){
         if(k[i]=='7'||k[i]=='4'){
             c++;
         }
     }
     if(c==size){
         f=1;
     }
     if(n%4==0||n%7==0){
         f=1;
     }
     if(f){
         cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;}
}