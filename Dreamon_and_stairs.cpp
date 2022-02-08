#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int32_t main(){
int n,m;
cin>>n>>m;
if(m>n){
    cout<<-1<<endl;
}
else {
    m=((n+1)/2 + m-1)/m*m;
    cout<<m<<"\n";
}
return 0;
}