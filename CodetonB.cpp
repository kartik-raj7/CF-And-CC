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
    int n,x;
    cin>>n>>x;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    int c=0;
    int mini = arr[0];
    int maxi = arr[0];
    for(int i=1;i<n;i++){
        int k = arr[i];
        maxi = max(k,maxi);
        mini = min(k,mini);
        if(maxi-mini>2*x){
            c++;
            maxi = mini = arr[i];

        }
    }
    cout<<c<<endl;
    }
    }