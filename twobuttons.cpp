#include <iostream>
using namespace std;
int main(){
    int n,m;int c=0;
    cin>>n>>m;
    if(m<=n){
        cout<<n-m<<endl;
    }
   else{
       while(n<m){
          if(m%2!=0)m++;
          else m/=2;
        c++;
       }
       cout<<c+n-m;
   }
}