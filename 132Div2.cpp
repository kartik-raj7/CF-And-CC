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
#include <queue>
#include <stack>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("No");
#define py puts("Yes");
#define test ll t; cin>>t; while(t--)
#define ll long long
// int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
     test{
        int n;
        cin>>n;
        int arr[3];
        loop(i,0,3){
            cin>>arr[i];
        }
        int k = n-1;
        if(arr[k]==0){pn;}
        else{
            int aux = arr[k];
            if(arr[aux-1]==0){
                pn;
            }
            else py;
        }
        // int k = arr[n-1];
        // if(arr[k]==0){pn;}
        // else if{
        //     (arr[k-1]==0){
        //     pn;
        // }
        // else py;

        // int a,b,c;
        // cin>>a>>b>>c;
        // if(a==0&&n==1)pn;

    }
}
}