#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
	int n,x,a=0,b=0,c=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{   cin>>x;
		if(x==0){
        a++;c=(c>a?c:a);
        }
		if(x==1){
		b++;
		if(a>0)
		a--;
		}
	}
	if(n==b) cout<<b-1;
	else cout<<c+b;
	return 0;
}
