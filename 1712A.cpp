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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
        test{
            int n,m;
            cin>>n>>m;
            int arr[n];
            int aux[n];
            int c=0;
            loop(i,1,n){
                cin>>arr[i];
                 if(i<=m&&arr[i]>m)
                    c++;
                }
          
            // sort(aux,aux+n);
            
            // for(int i=1;i<=n;i++){
               
            cout<<c<<endl;

        }
}