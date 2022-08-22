#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#include <vector>
#include <numeric> 
#include <algorithm>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t;  while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
      string str;
      loop(i,0,9){
        cin>>str;
        for(auto &it:str){
          if(it=='3'){
            it='2';
          }
        }
        cout<<str<<endl;
      }
    //   int arr[9][9];
    //   for(int i=1;i<=9;i++){
    //     for(int j=1;j<=9;j++){
    //       cin>>arr[i][j];
    //     }
    //   }
    //   for(int i=1;i<=9;i++){
    //     for(int j=1;j<=9;j++){
    //       cout<<arr[i][j];
    //     }
    //     cout<<endl;
    //   }
    // }
}
}
//       vector<int>aux;
//       vector<vector<int>> arr(9,vector<int>(9,0));
//       loop(i,0,9){
//         loop(j,0,9){
//            int x;
//            cin>>x;
//            aux.pb(x);
//         }
//         arr.pb(aux);
//         aux.clear();
//       }
//       // loop(i,0,9){
//       //   loop(j,0,9){
//       //    if(arr[i][j]==2){
//       //     arr[i][j]=3;
//       //    }
//       //   }
//       // }
//     loop(i,0,9){
//       loop(j,0,9){
//          cout<<arr[i][j];
//       }
//       cout<<endl;}
//     }
// }