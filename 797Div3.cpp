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
    int n;
    cin>>n;
    int c = floor((n-3)/3);
    int temp = n-c;
    int a,b;
    if(temp%2==0){
         a = floor((temp+2)/2);
         b = n-(a+c);
    }
    else{
        b = floor((temp-1)/2);
        a = floor((temp+1)/2);
    }
    // if(n<=6){
    //     cout<<n/3<<" "<<n/3+1<<" "<<n-(2*(n/3))-1<<endl;
    // }
    // else if(n==7){
    //     cout<<2<<" "<<4<<" "<<1<<endl;
    // }
    // else {
    //     int b = n/3+1;
    //     int a = b+1;
    //     int c = n-(b+a);
    //     if(c==0){
    //        cout<<b-1<<" "<<a<<" "<<1<<endl;
    //     }
    //     else cout<<b<<" "<<a<<" "<<c<<endl;
    // }
    // int a = 1;
    // int c = n-1;
    // if(c%2==0){
    //     cout<<c/2-1<<" "<<c/2+1<<" "<<a<<endl;
    // }
    // else cout<<c/2<<" "<<c/2+1<<" "<<a<<endl;
    cout<<b<<" "<<a<<" "<<c<<endl;
   }
   }