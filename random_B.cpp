#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
#define ll long long 
using namespace std;
int main()
{
    ll minimum;
    ll maximum;
    ll n,m;
    cin>>n>>m;
    maximum = ((n-(m-1))*(n-(m-1)-1)/2);
    ll size=n/m;
    ll remainder=n%m;
    minimum = remainder*(size+1)*(size)/2 + (m-remainder)*(size)*(size-1)/2;
    cout<<minimum<<" "<<maximum<<"\n";
    return 0;
}