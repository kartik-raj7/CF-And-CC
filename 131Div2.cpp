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
     int arr[2][2];
     int zero=0,one=0;
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0)zero++;
            else one++;
        }
     }
     if(zero==4)cout<<0<<endl;
     else if(one==4)cout<<2<<endl;
     else if(one==2)cout<<1<<endl;
     else cout<<1<<endl;
    //  if((arr[0][0]==1&&arr[1][0]==1)&&zero==2)cout<<1<<endl;
    //  if((arr[0][1]==1&&arr[1][1]==1)&&zero==2)cout<<1<<endl;
    //  else cout<<2<<endl;
}
}