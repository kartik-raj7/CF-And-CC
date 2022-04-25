#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
         ll n,r,b;
         cin>>n>>r>>b;
           int p = r / (b + 1);
        int q = r % (b + 1);
        for (int i = 0; i < q; i++)
            cout << string(p + 1, 'R') << 'B';
        for (int i = q; i < b; i++)
            cout << string(p, 'R') << 'B';
        cout << string(p, 'R');
        cout << endl;
        }
        return 0;}