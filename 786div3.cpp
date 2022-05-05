#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
test{
string s;
cin>>s;
int n = s.length();
int counter = n;
	map<char,int> mp;
    loop(i,0,n){
        mp[s[i]]++;
        if(mp[s[i]]==2){
            counter-=2;
            mp.clear();
        }
    }
    cout<<counter<<endl;
}
    return 0;
    }