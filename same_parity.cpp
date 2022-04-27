#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
        int n,k;
        cin>>n>>k;
   		ll x = n-(k-1);
		ll y = n-(k-1)*2;
		if(x>0 && x%2!=0)
		{
			py;
			for(int i=0;i<k-1;i++)
				cout<<"1 ";
			cout<<x<<endl;			
		}
		else if(y>0 && y%2==0)
		{
			py;
			for(int i=0;i<k-1;i++)
				cout<<"2 ";
			cout<<y<<endl;
		}
		else
			pn;
	}
        return 0;
        }
        