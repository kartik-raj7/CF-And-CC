#include <math.h>
#include <iostream>
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	ll n;
	cin>>n;
	ll x,y,z;
	x=sqrt(n);
	y=cbrt(n);
    n=sqrt(n);
    z=cbrt(n);
	cout<<(x+y-z)<<endl;
	}
	return 0;
}
