#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
	string s;
	cin>>s;
	int q;
	cin>>q;
	int n=s.size();
	int a[n];
	a[0] = 0;
	loop(i,1,n){
		a[i] = a[i-1]+(s[i]==s[i-1]);
	}
	while(q--){
		int l,r;
		cin>>l>>r;
		l--;r--;
		cout<<a[r]-a[l]<<endl;
	}
}