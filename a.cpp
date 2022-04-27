#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
        int n;
        cin>>n;
        if(n<3){
            cout<<n<<endl;
        }
        else{
            int k = n%5;
            int s = n/5;
            cout<<(s*4)+k<<endl;
        }
	}
        return 0;
        }
        