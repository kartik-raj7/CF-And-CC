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
        int n;
        cin>>n;
        int g=0,a=0;
        for(int i=0;i<n;i++){
            for(int b=0;b<g;b++){
                cout<<" ";
            }
            for(int b=0;b<=a;b++){
                if(b<a){
                    cout<<b<<" ";
                }
                else{
                    cout<<b;
                }
            }
            for(int b = a-1;b>=0;b--){
                cout<<" "<<n;
            }
            cout<<endl;
            g--;
            a++;
        }
    }
