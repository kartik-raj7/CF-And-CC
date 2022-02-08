#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstring>
#define ll long long
using namespace std;
int n,a[4],ans[4007];
int main() {
    memset(ans,~0x3f,sizeof(ans));
	cin>>n>>a[1]>>a[2]>>a[3];
	ans[0]=0;
	for(int i=1;i<=3;++i){
		for(int j=a[i];j<=n;++j)
			ans[j]=max(ans[j],ans[j-a[i]]+1);
	}
	cout<<ans[n];
}