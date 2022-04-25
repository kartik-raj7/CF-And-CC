#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
   
    while(t--){
        string str;
        bool flag = true;
        cin>>str;
        int n= str.length();
        int a = 0,b=0;
        if(str[0]=='B')flag=false;
        if(str[n-1]!='B'){
          flag=false;     }
          if(flag==true){
        loop(i,0,n){
            if(str[i]=='A'){a++;}
            else b++;
            if(b>a){
              flag=false;break;
            }
        }}
        // if(a>=1&&b==0){
        //     flag=false;
        // }
//         if(n==1||a[n-1]!='B'){
//             flag=false;
//         }
//        else if(a1>=b){
//                 flag = true;
//             }
//         else {
//         loop(i,0,n-1)
//            if(a[i]='B'&&a[i+1]=='B')
//             flag = false;
//         }
        if(flag){py;}
        else pn;
}
return 0;
}
