#include <vector>
#include <math.h>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <map>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    map<ll,ll>c;
    ll maxi=0;
    for(auto &it:v){
        if(it%m==0)continue;
         ++c[m-it%m];
         maxi=max(maxi,c[m-it%m]);
    }
    ll answer=0;
    for(auto x:c){
        if (x.second == maxi) {
				answer = m *(x.second - 1) + x.first + 1;
			}
		}
		cout << answer << endl;
    }
    return 0;
}