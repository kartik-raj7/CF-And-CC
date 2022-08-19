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
        set<int>s;
        int n;
        cin>>n;
        int aux[n];
        int arr[n];
        loop(i,0,n){
          cin>>arr[i];
          aux[i] =arr[i];
          s.insert(arr[i]);
        }
        // if(s.size()==1){
        //     cout<<0<<endl;
        // }
        sort(aux,aux+n);
        cout<<aux[n-1]+aux[n-2]-aux[0]-aux[1]<<endl;
    }
}