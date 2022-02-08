#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long
#define d double
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int  k = (n/m)*b;
    if(m*a<=b){
        cout<<n*a<<endl;
    }
    else cout<<(n/m)*b+min((n%m)*a,b);
    }