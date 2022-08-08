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
#include <unordered_map>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define pys puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n;
        cin>>n;
        int x,y;
        int nx=0;
        int px=0;
        int ny=0;
        int py=0;
        while(n--){
        cin>>x>>y;
        if(x==0){
            if(y<0){
                ny = min(ny,y);
            }
            if(y>0){
                py = max(py,y);
            }
        }
        else if(y==0){
            if(x<0){
                nx = min(nx,x);
            }
            if(x>0){
                px = max(px,x);
            }
        }
    }
        // if(x==0&&y>0){
        //     py=max(py,y);
        // }
        // else if(x==0&&y<0){
        //     ny = max(ny,abs(y));
        // }
        // else if(y==0&&x>0){
        //     px=max(px,x);
        // }
        // else if(y==0&&x<0){
        //     nx = max(nx,abs(x));
        // }
        
        int ans = (py+px+abs(ny)+abs(nx))*2;
        cout<<ans<<endl;
    // cout<<py<<" "<<ny<<" "<<px<<" "<<nx;
}
}