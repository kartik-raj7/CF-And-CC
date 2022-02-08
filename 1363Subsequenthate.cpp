#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
string s;
 while(t--){
        int suf[2]={0, 0}, pref[2]={0, 0}, ans=0;
        cin>>s;
 
        for(char c: s)
            suf[c-'0']++;
 
        ans=min(suf[0], suf[1]);
        for(char c: s){
            pref[c-'0']++;
            suf[c-'0']--;
 
            ans = min(ans, pref[1]+suf[0]);
            ans = min(ans, pref[0]+suf[1]);
        }
        cout<<ans<<endl;
    }
return 0;}
/*
while(t--){
string n;
cin>>n;
ll s0=0,s1=0;ll p0=0,p1=0;
for(int i=0;i<n.length();i++){
if(n[i]=='0'){
    s0++;
}
else s1++;
}
ll answer=min(s0,s1);

for(int i=0;i<n.length();i++){
    if(n[i]=='0')
        p0++;
    else p1++;
    if(n[i]=='0')
        s0--;
    else s1--;
   
}
answer = min(answer,p1+s0);
answer = min(answer,p0+s1);
cout<<answer<<endl;
}
}
*/
