#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <vector>
#define pb push_back
using namespace std;
void solve(){
int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
 
 
        set<int>st;
        for(int i=0;i<n;i++)  {
            st.insert(a[i]);
 
        }
 
        if (st.size() > k) {
            cout<<-1<<endl;
            return;
        }
        vector<int> v;
 
        for(int i=1;i<=n;i++) {
            for (auto it : st) v.pb(it);
 
            for(int j=1;j<=k - st.size();j++) v.pb(1);
        }
 
 
        cout<<(n * k)<<endl;;
 
        for (auto it : v) cout << it << " ";
        cout << endl;
    }
   /* int n,k;
    cin>>n>>k;
    set<int>s;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        s.insert(e);
    }
    if(s.size()>k){
        cout<<-1<<endl;
        return;
    }
    vector <int> v;
    for(int i=1;i<=n;i++){
        for(auto p:s)
        v.pb(p);
    for(int j=1;j<=k-(int)s.size();j++)
       v.pb(1);}
     cout<<n*k<<endl;
for(auto it: v) cout<<it<<" ";
cout<<endl;
}*/

int main(){
int t;
cin>>t;
while(t--){
    solve();
}
}