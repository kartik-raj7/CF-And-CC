#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("No");
#define py puts("Yes");
#define test ll t; cin>>t; while(t--)
#define ll long long
int v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.size();
    stack<char>q;
    q.push(str[0]);
    int i=1;
    while(i<n){
     if(q.empty()&&i<n){
        q.push(str[i]);
        i++;
     }
     else if(q.top()==str[i]){
        q.pop();
        i++;
     }
     else{
        q.push(str[i]);
        i++;
     }
    }
    if(q.empty()){
        py;
    }
    else pn;
    }