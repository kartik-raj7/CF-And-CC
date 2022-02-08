#include<iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int a,n,counter=0;
    int p=0,b=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a;
    if(a%2==0){b=i;
    counter++;}
    else p=i;}
if(counter==1){cout<<b;}
else cout<<p;
    return 0;
}
 
      		  