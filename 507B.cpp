#include <math.h>
#include <iomanip>
#include <string.h>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
ll r,x,y,x1,y1;
cin>>r>>x>>y>>x1>>y1;
ll x2 = x1-x;
ll y2 = y1-y;
ll ans = ceil(sqrt((pow(x2,2)+pow(y2,2)))/(2*r));
cout<<ans<<endl;
}