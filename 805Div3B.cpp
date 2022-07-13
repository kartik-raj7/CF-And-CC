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
        string str;
        cin>>str;
        map<int,int>mp;
        int c=3;
        int ans=0;
        set<char> s;
        for(int i=0;i<str.size();i++){
              s.insert(str[i]);
              if(s.size()==3&&s.find(str[i+1])==s.end()){
                s.clear(); ans++;
              }

        }
        if(s.size()>0)ans++;
        cout<<ans<<endl;
        // int n = mp.size();
        // if(n<=3){
        //     cout<<1<<endl;
        // }
        // else if(n%3==0){
        //     cout<<n%3<<endl;
        // }
        // else cout<<n%3+1<<endl;
}
}