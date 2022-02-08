#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x,f=0;
	    cin>>n>>x;
	    int a[n], c[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        c[i] = a[i];
	    }
	    sort(c,c+n);
	    for(int i=n-x; i<x; i++)
	    {
	        if(a[i]!=c[i])
	        f=1;
	    }
	    if(f!=0)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}