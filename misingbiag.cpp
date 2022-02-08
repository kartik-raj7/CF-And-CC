#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n-2];
        string ans = "";
        for(int i=0; i<n-2; i++) {
            cin>>a[i];
        }
        for(int i=0; i<n-3; i++){
            if(a[i][1]==a[i+1][0]){
            ans+= a[i][0];}
            else ans+= a[i];
        }
        ans+=a[n-3];
        if(ans.size()<n)
         ans+="a";
        cout<<ans<<endl;
    }
    return 0;
}
