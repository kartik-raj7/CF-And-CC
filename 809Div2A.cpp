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
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n,m;
        cin>>n>>m;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        string s(m,'B');
        for(int i=0;i<n;i++){
            // if(s[arr[i]-1]=='B'){
            //     s[arr[i]-1]='A';
            // }
            int aux = arr[i];
            ll a,b;
            if((m+1-aux)>=aux){
                a = aux;
            }
            else{
                a = m+1-aux;
            }
            if((m+1-aux)<aux){
                b = aux;
            }
            // int k = s[arr[i]-1];
            // int m = s[m-arr[i]+1];
            // if(k<=m&&arr[k]=='B'){
            //     s[k]='A';
            // }
            // else s[m]='A';
            else{
                b = m+1-aux;
            }
            if(s[a-1]=='B'){
                s[a-1]='A';
            }
            else{
                s[b-1]='A';
            }

            // else if(s[arr[i]-1]=='A'&&s[m-arr[i]]=='B'){
            //     s[m-arr[i]]=='A';
            // }
        }
        cout<<s<<endl;
    }
}