#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;char c;
string s;
cin>>n>>c>>s;
bool k = true;
int p = -1;
for(int i=0;i<n;i++){
    if(s[i]==c) p=i;
    if(s[i]!=c) k =false;
}
if(k==true){
    cout<<0<<endl;
}
else if(p==-1){
    cout<<"2\n"<<n-1<<" "<<n<<"\n";
}
else if(p==n-1){
    cout<<"1\n"<<p+1<<"\n";
    }
else if(p>=n/2){
    cout<<"1\n"<<p+1<<"\n";
    }
else{
    cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
}
return 0;
}