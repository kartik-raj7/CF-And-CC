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
#define test ll t; cin>>t;  while(t--)
#define ll long long
ll v[999999];
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        int zero = 0,ones=0;
        loop(i,0,n){
            loop(j,0,m){
                cin>>arr[i][j];
                if(arr[i][j]=='0'){
                    zero++;
                }
                else ones++;
            }
        }
bool flag = false;
       if(zero==n*m){
        cout<<0<<endl;
       }
       else{
        
        loop(i,0,n-1){
            loop(j,0,m-1){
                int counter=0;
                // if(i>0&&j>0){
                    if(arr[i+1][j]=='0'){
                        counter++;
                    }
                    if(arr[i+1][j+1]=='0'){
                        counter++;
                    }
                    if(arr[i][j+1]=='0'){
                        counter++;
                    }
                    if(arr[i][j]=='0'){
                        counter++;
                    }
                // }
                if(counter>=2){
                      flag=true;
                      break;
                }
            }
            if(flag)break;
        }
        if(flag){
            cout<<ones<<endl;
        }
        else if(zero>=1){
            cout<<ones-1<<endl;
        }
        else cout<<ones-2<<endl;
       }
    //    else if(ones==n*m){
    //     cout<<n<<endl;
    //    }
    }
}