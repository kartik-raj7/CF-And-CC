#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    int b=0,w=0;
    int maxi = 0;
    int c;
loop(i,0,k){
  if(str[i]=='W')w++;
}
int j=0;
c = w;
for(int i=k;i<n;i++){
    if(str[j]=='W'){
        c--;
    }
    if(str[i]=='W'){
        c++;
    }
    w = min(w,c);
    j++;
}
cout<<w<<endl;
// loop(i,0,n){
//     if(str[i]=='B'){
//         b++;
//     }
//     else w++;
// }
//  loop(i,0,n-1){
//      if((str[i]==str[i+1])&&str[i]=='B'){
//          c++;
//      }
//      else { 
//      c=1;
//  }
//  maxi = max(c,maxi);
// }
// cout<<maxi<<endl;
//    if(maxi>=k){
//        cout<<0<<endl;
//    }
//    else cout<<k-maxi<<endl;
}
}

//     for(int i=1;i<n;i++){
//       if(str[i]==str[i-1]=='B'){
//           c++;
//           cout<<c<<endl;
//       }
//       else {
//           maxi = c>maxi?maxi=c:maxi;
//           c=1;
//     }
//    }
//    }
// }
// //    cout<<maxi<<endl;}}
//    if(maxi>=k){
//        cout<<0<<endl;
//    }
//    else cout<<k-maxi<<endl;
//    }
// }