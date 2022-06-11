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
    loop(i,0,n){
        if(arr[i]<brr[i]){
            flag = false;
            break;   
        }
        else ans = abs(arr[i]-brr[i])>ans?abs(arr[i]-brr[i]):ans;
    }
   loop(i,0,n){
        int temp = arr[i]-ans>0?arr[i]-ans:0;
        if(temp==brr[i]){
            continue;
        }
        flag=false;break;
    }
    // if(n==1){
    //     cin>>arr[0];
    //     cin>>brr[0];
    //     if(arr[0]>=brr[0]){
    //         py;
    //     }
    //     else pn;
    // }
    // else{
    // loop(i,0,n){
    //     cin>>arr[i];
    //     arr[i];
    // }
    // loop(i,0,n){
    //     cin>>brr[i];
    // }
    // // if(n==1){
    // //     if(arr[0]+1>=brr[0]){py;}
    // //     else pn;
    // // }
    // int aux[n];int s=0,r=0;
    // loop(i,0,n){
    //   aux[i]=arr[i]-brr[i];
    // //   if(aux[i]==0)r++;
    // }
    // sort(aux,aux+n);
    // loop(i,0,n){
    //     cout<<aux[i]<<" ";
    // }
    // cout<<endl;}
    // // s = count(aux,aux+n,aux[n-1]);
    // // if(s+r==n){
    // //     py;
    // // }
    // // else pn;
    if(flag){
        py;
    }
    else pn;
   }
   }