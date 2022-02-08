#include <iostream>
#include <string>
using namespace std;
int main(){
int t;
cin>>t;
string k;
while(t--){
    
    cin>>k;
    if(k.length()%2==0){
    int p = k.length()/2;
    string f=k.substr(0,p);
    string e = k.substr(p,k.length()-1);
    if(f==e){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}
return 0;
}