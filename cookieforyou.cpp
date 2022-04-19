#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      if(((a+b)<(c+d))||a==0||b==0||c==0||d==0) cout << "No"<<endl;
     	else cout << "Yes"<<endl;;
    }
}