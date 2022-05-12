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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
map<string,string>mp;
{
    int n;
    cin >> n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; i++)
    {cin >> arr[i].second >> arr[i].first;}
    sort(arr, arr + n);
    int c = 0, b = 1;
    for (int i=n-1;i>=0&&b>0;i--)
    {   c+= arr[i].second;b+= arr[i].first - 1;
    }
    cout<<c<<endl;}
}