#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    double p = pow(a,2)+pow(b,2);
    double c=sqrt(p);
    if(c==0){cout<<0<<endl;}
    else if(abs(c-(int)c)==0){
        cout<<1<<endl;
    }
    else cout<<2<<endl;
    }
}