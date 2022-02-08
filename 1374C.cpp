#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
#include <math.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int open=0,close=0,ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(') open++;
			else close++;
			ans=max(ans,close-open);
		}
		cout<<ans<<endl;
		
	}
	return 0;
}