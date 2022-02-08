#include <math.h>
#include <iomanip>
#include <string.h>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
ll a,b,c;
cin>>a>>b>>c;
ll m = a*b*c>a*(b+c)?a*b*c:a*(b+c);
//ll o = a*(b+c);
ll n = a+b*c>(a+b)*c?a+b*c:(a+b)*c;
//ll p = (a+b)*c;
ll f = a+b+c;
ll ans = max(max(m,n),f);//max(max(m,o),max(n,p));
cout<<ans<<endl;
}