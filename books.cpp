#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int n,m;
cin>>n>>m;int x;int ans=0;
int a[n];int c=0;int sum[100000],k=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		sum[i]=sum[i-1]+x;
		if(sum[i]-sum[c]>m) c++;
		ans=max((i-c),ans);
	}
	cout<<ans;
}