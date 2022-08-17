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
#include <vector>
#include <numeric> 
#include <algorithm>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    string str;
    cin>>str;
    int ind = str.find("AB");
    int ind2 = str.find("BA");
    if(ind!=string::npos&&str.find("BA",ind+2)!=string::npos){
        py;        
    }
    else if(ind2!=string::npos&&str.find("AB",ind2+2)!=string::npos){
        py;
    }
    else pn;
}