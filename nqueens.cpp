#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        double f = pow((0.143*r),r);
        cout<<round(f)<<endl;
    }
}