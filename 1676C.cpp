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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
test{
int mini=INT_MAX;
int sum;
		int n,m;
		cin>>n>>m;
		string str[100];
	for(int i=1;i<=n;i++){
            cin>>str[i];}
		for(int i=1;i<n;i++){
			  for(int j=i+1;j<=n;j++){
				sum=0;
				  for(int k=0;k<m;k++){
					  sum=sum+abs(str[i][k]-str[j][k]);	
				}
				mini=min(mini,sum);
			}
		}
	cout<<mini<<endl;
	}
	return 0;
} 
// for(int i=0;i<n;i++){
//     cin>>str[i];
// }
// int a = 10000001;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         sum=0;
//         for(int s=0;s<m;s++){
//             sum+=abs(int(str[i][s])-int (str[j][s]));
//         }
//         mini = min(mini,sum);
//     }  
// }