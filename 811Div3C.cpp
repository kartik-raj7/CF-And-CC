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
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n;
        cin>>n;
        string ans= "";
        if(n<=9){
            cout<<n<<endl;
        }
        else if(n==45){
            cout<<123456789<<endl;
        }
        else{
            for(int i=9;i>=1;i--){
                if(n-i>=0){
                   ans+=(i+'0');
                   n-=i;
                }

            }
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
    }
}