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
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int cal =0;
        for(int i=0;i<m;i++){
            if(arr[n-1][i]=='D'){
                cal++;
            }
        }
        for(int j=0;j<n;j++){
            if(arr[j][m-1]=='R'){
                cal++;
            }
        }
        cout<<cal<<endl;
    }

    }