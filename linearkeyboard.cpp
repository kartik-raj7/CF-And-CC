#include<iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int main()
{
	int t,l,r,ans=0;
	string s,p;
	cin>>t;
	while(t--){
		cin>>s;
		cin>>p;
		for(int j=0;j<p.length()-1;j++){
			for(int k=0;k<=25;k++){
				if(s[k]==p[j])l=k;
				if(s[k]==p[j+1])r=k;
			}
			ans+=abs(l-r);
		}
		cout<<ans<<endl;
		ans=0;
	} 
	return 0;
}