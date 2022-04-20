#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
       int n,s;
       cin>>n>>s;
    if(n%4==1||n%4==2||n%4==3){
        if(s==1){
            puts("Ambiguous");
        }
        else cout<<"On"<<endl;
    }
     else {
         if(s==0){
         puts("Off");
     }
     else puts("On");
}
}
return 0;}