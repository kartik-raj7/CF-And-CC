#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
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
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    int ans = 0;
    bool flag = true;
    int temp=0;
    loop(i,0,n){
        cin>>arr[i];
    }
    loop(i,0,n){
        cin>>brr[i];
    }
    int aux[n];
    int diff[n];
    aux[0]=brr[0]-arr[0];
    loop(i,0,n){
       diff[i] = brr[i]-arr[i];
    }   
    loop(i,1,n){
       aux[i]=brr[i]-brr[i-1];
    }
    loop(i,0,n){
        aux[i]= min(aux[i],diff[i]);
    }
    loop(i,0,n){
        cout<<aux[i]<<" ";

    }
    cout<<endl;}
   }