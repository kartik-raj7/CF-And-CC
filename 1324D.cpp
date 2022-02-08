#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
int c=0,i=0;
for(int j=0;j<n;j++){
    if((a[i]+a[j])>(b[i]+b[j])){
        c++;
    }
    if(j==n-1){
        i++;
        j=i;
    }
    if(i==n-1){
        break;
    }
}
cout<<c<<endl;
}
