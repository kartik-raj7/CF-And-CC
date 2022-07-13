#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#include <iomanip>
#define pb push_back
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
   test{
    string s;
    cin>>s;
    string k = s;
    int n;
    sort(k.begin(),k.end());
    cin>>n;
    map<char,int>mp;
    string str = "";
    vector<char>v;
    int aux=n-1;
    // for(int i=0;i<str.size();i++){
    //     mp[s[i]]++;
    // }
    // cout<<str[0]-'a';
    for(int i=0;i<s.size();i++){
        if((k[i]-'a')<n){
            mp[k[i]]++;
            n-=((k[i]-'a')+1);
            // if(n==1)break;
        }
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]>0){
            str+=s[i];
            mp[s[i]]--;
        }
    }
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    cout<<str<<endl;
    }
}