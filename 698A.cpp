#include <iostream>
#include <map>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];int sum=0;
for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0 ; i < n; i++){
		if(a[i-1] == 1 && a[i] == 3){
			a[i]=2;
		}
		else if(a[i-1] == 2 && a[i] == 3){
			a[i]=1;
		}
		else if(a[i] == 0){
			sum++;
		}
		else if(a[i-1] == a[i] && i != 0 && a[i] != 3){
			sum++;
			a[i]=4;
		}
	}
	cout<<sum;
}