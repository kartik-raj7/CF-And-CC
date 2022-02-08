#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int n,sum;
cin>>n>>sum;
if(sum>9*n||sum==0&&n>1){
    cout<<-1<<" "<<-1<<endl;
}
else { int k;
		for(int i=n-1,k=sum;i>=0;i--){
			int j=max(0,k-9*i);
			if(j==0&&i==n-1&&k) j=1;
			cout<<j;
			k-=j;}
		cout<<' ';
		for(int i=n-1,k=sum;i>=0;i--){
			int j=min(9,k);
			cout<<j;
			k-=j;}
	}
}