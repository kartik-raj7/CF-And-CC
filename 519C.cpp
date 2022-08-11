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
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int solve(int a,int b){
    if(a==0||b==0)return 0;
    if(a+b<3)return 0;
    else return 1;
}
int main(){
    int xp;
    int nb;
    cin>>xp>>nb;
    int counter=0;
    if(xp==nb){
        counter = (xp+nb)/3;
    }
    // while(xp>=1&&nb>=1){
        if(xp>=nb){
           counter=1+solve(xp-2,nb-1);
        }
        else if(xp<=nb&&nb>=2&&xp>=1){
           counter+=solve(nb,xp);
        }
        // else{
        //     break;
        // }
   cout<<counter<<endl;
}