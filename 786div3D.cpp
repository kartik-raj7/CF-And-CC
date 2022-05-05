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
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n;
        cin>>n;bool flag = true;
        vector<int> v(n);
        loop(i,0,n){
            cin>>v[i];
        }
        for(int i = (n%2);i<n;i++){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
            }
            i++;
        }
        loop(i,1,n){
            if(v[i]<v[i-1]){
                flag=false;
            }
        }
        if(flag){py;}
        else pn;
    }
    return 0;}