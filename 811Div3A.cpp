#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
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
        int n,h,m;
        cin>>n>>h>>m;
        int ans = h*60+m;
        int x,y;
        int ahm=INT_MAX;
        ll aux[n];
        loop(i,0,n){
            ll x,y;
            cin>>x>>y;
            x*=60;
            x+=y;
            aux[i]=x;
        }
        sort(aux,aux+n);
        ll ret = 0;
        bool flag =false;
        for(int i=0;i<n;i++){
            if(aux[i]>=ans){
                ret = abs(aux[i]-ans);
                flag = true;
                break;
            }
        }
       if(!flag){
        aux[0]+=1440;
        ret = abs(aux[0]-ans);
       }
       cout<<(ret/60)<<" "<<(ret%60)<<endl;
        // while(n--){
        //      int x,y;
        //      cin>>x>>y;
        //      int solve = x*60+y;
        //      if(solve<ahm){
        //         ahm = solve;
        //      }
        // }
        // if(ahm<ans){
        //     ans = 1440-ans;
        //     cout<<(ans+ahm)/60<<" "<<(ans+ahm)%60<<endl;
        // }
        // else{
        //   cout<<abs((ahm-ans))/60<<" "<<abs((ahm-ans))%60<<endl;
        // }
        // cout<<ahm<<" "<<ans<<endl;
        // cout<<abs(ahm-ans)<<endl;
        
    }
}
    //         cin>>x>>y;
    //         if(x<ahr){
    //             ahr=x;
    //             ahm=y;
    //         }
    //         else if(x==ahr){
    //             if(y<ahm){
    //                 ahr = x;
    //                 ahm = y;
    //             }
    //         }
    //     }
    //         int min = 0;
    //         int hr=0;
    //         if(ahm<m){
    //             min = 60-m;
    //             h+=1;
    //             min+=ahm;
    //             if(ahr>h){
    //                 hr = ahr-h;
    //             }
    //             else{
    //                 hr = 24-h+ahr;
    //             }
    //         }
    //         else{
    //             min = ahm-m;
    //             if(ahr>h){
    //                 hr = ahr-h;
    //             }
    //             else{
    //                 hr = 24-h+ahr;
    //             }
    //         }
    //         cout<<hr%24<<" "<<min<<endl;
    //     }
    // }