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
#include <iomanip>
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
       int n,m;
    cin>>n>>m;
    double sum = 0.0;
    int arr[n];
    // int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(m==1){
        sort(arr,arr+n);
        if(n-1%2==0){
        double k = 0.0;
        k =  (arr[(n/2)]+arr[(n+1)])/2.0;
        cout<<setprecision(6)<<k<<endl;        // 
    }
    else {
        cout<<setprecision(6)<<(double)arr[n/2]<<endl;
    }
  }
  else{
      sort(arr,arr+n);
      double ans = 0.0;
      int  k = n-m;
      for(int i=n-1;i>n-m;i--){
        ans+=arr[i];
      }
      if((k-1)%2==0){
         double sol = (arr[(k-1/2)]+arr[(k)/2])/2.0;
        cout<<setprecision(6)<<sol+ans<<endl;  
      }
      else cout<<setprecision(6)<<arr[k/2]+ans<<endl;
  }
  
}
}
// #include <iostream>
// #include <math.h>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <iostream>
// #include <algorithm>
// #include <numeric>
// #include <vector>
// #include <stdlib.h>
// #include <set>
// #include <limits>
// #define pb push_back
// #include <map>
// #include <unordered_set>
// #include <string.h>
// #include <string>
// #define MOD 1000000007
// #define pn puts("NO");
// #define py puts("YES");
// #define test ll t; cin>>t; while(t--)
// #define ll long long
// #define loop(i,l,h) for(ll i=(l);i<(h);i++)
// using namespace std;
// int main(){
//    test{
//        int n,m;
//     cin>>n>>m;
//     double sum = 0.0;
//     double arr[n];
//     // int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     if(m==1){
//         sort(arr,arr+n);
//         if(n%2==0){
//         double k = arr[(n/2)]+(arr[(n/2)+1]/2.0);
//         cout<<k<<endl;        // 
//     }
//     else {
//         cout<<(double)arr[n/2]<<endl;
//     }
//   }
//   else{
//       sort(arr,arr+n);
//       double ans = 0.0;
//       int  k = n-m;
//       for(int i=n-1;i>n-m;i--){
//         ans+=arr[i];
//       }
//       if(k%2==0){
//          double sol = (arr[(k/2)]+arr[(k/2)+1])/2.0;
//         cout<<sol+ans<<endl;  
//       }
//       else cout<<arr[k/2]+ans<<endl;
//   }
  
// }
// }