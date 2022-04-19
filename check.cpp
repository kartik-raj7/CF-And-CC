#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main()
{ 
 char arr[4][4];
 int countd =0,counts =0;
 loop(i,0,4)
    {
      loop(j,0,4)
         {
           cin>>arr[i][j];
           if(arr[i][j]=='.'){countd++;}
           else {counts++;}
         }
    }
 if(countd==counts) {
     cout<<"NO"<<endl;
     }
 else{
     cout<<"YES"<<endl ;
     }
     return 0;
 }