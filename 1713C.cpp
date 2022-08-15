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
        if(n==2){
            cout<<1<<" "<<0<<endl;
        }
        else if(n==1){
            cout<<0<<endl;
        }
        else{
            loop(i,0,n){
                cout<<n-i<<" ";
            }
            cout<<endl;
        }
        // else if(n%2==0){
        //     cout<<0<<" ";
        //     for(int i=n-1;i>=1;i--){
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }
        // else {
        //     cout<<1<<" "<<0<<" "<<2<<" ";
        //     for(int i=n-1;i>=3;i--){
        //         cout<<i<<" ";
        //     }
        //     cout<<endl;
        // }

    }
}