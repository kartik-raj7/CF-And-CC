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
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        string str;
         cin>>str;
        int l=0,r=str.length()-1;
        int n= str.length();
        for(int i=0;i<n;i++)
            if(str[i]=='1')
                l=i;
        for(int i=n-1;i>=0;i--)
            if(str[i]=='0')
                r=i;
        cout<<r-l+1<<'\n';
    }
}