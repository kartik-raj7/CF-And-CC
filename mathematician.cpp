#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int k=(a+b)/4;
if(a==1&&b>0||b==1&&a>0){
    cout<<1<<endl;
}
else if(a==0||b==0){
    cout<<0<<endl;
}

else cout<<min(min(a,b),k)<<endl;
}
}