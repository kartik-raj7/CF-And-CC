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
// void solve(vector<int> aux,vector<int>v,vector<vector<int>>ans,vector<int>&vis){
//         if(aux.size()==v.size()){
//             ans.pb(aux);
//             return;
//         }
//         for(int i=0;i<v.size();i++){
//             if(!vis[i]){
//                 aux.pb(v[i]);
//                 vis[i]=1;
//                 solve(aux,v,ans,vis);
//                 vis[i]=0;
//                 aux.pop_back();
//             }
//         }
//     }
int main(){
    
    test{
        int n;
        cin>>n;int aux=0;
        if(n==1)aux=2;
        else if(n==2)aux=1;
        else if(n%3==0)aux=n/3;
        else if(n%3==1||n%3==2)aux = n/3+1;
        cout<<aux<<endl;}
}
    //    int n;
    //    cin>>n;
    //    vector<int>v;
    //    int arr[n];
    //    for(int i=0;i<n;i++){
    //     arr[i] = i+1;
    //    }
    //    vector<vector<int>>ans;
    //    vector<int>aux;
    //    vector<int>vis(n,0);
    //    int k =1;
    //    int behind = n-1;
    //    int front = 0;
    //    cout<<n<<endl;
    //    for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //          cout<<arr[j]<<" ";
    //     }
    //     cout<<endl;
    //     swap(arr[n-i-2],arr[n-i-1]);}
    //    }
    // }
    //    for(int i=0;i<n;i++){
    //     for(int i=0;i<n;i++){
    //         cout<<v[i]<<" ";
    //     }
    //     cout<<endl;
    //     int k = v.front();

    //    }
    //    solve(aux,v,ans,vis);
    //    for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    //    }
//     }
// }