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
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
      int n;
      cin>>n;int c=0;int k=0;
      int arr[n];
      vector<int> v;int cpy1[n],cpy2[2];
      loop(i,0,n){
          cin>>arr[i];
          cpy1[i]=arr[i];
      }
      int brr[n];
      loop(i,0,n){
          cin>>brr[i];
          cpy2[i]=arr[i];
      }
      sort(cpy1,cpy1+n);
      sort(cpy2,cpy2+n);
      int i, j, mini;
    for (i = 0; i < n-1; i++)
    {
        mini = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[mini])
            mini = j;c++;
        swap(arr[mini],arr[i]);
        swap(brr[mini],brr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(brr[i+1]<brr[i]){
           k=-1;break;
        }
        
    }