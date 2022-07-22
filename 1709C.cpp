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
#define test ll t; cin>>t; while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        string str;
        cin>>str;
        int n =str.length();
        int pref_sum=0;
        int q=0;
        for(int i=0;i<str.length();i++){
           if(str[i]=='(')
           pref_sum+=1;
        else if(str[i]==')'){
            pref_sum-=1;
        }
        else q++;
        }
        // cout<<pref_sum<<" "<<q<<endl;
    if(q==n&&q>2){
        pn;
    }
    else if(q==2&&n==2||q==0&&pref_sum==0){
        py;
    }
    else{
        if(pref_sum+q==0){
            py;
        }
        else pn;
    }
    }
}