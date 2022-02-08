/* #include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
sort(A,A+n);
int sum = A[n-1];
for (int i=0;i<n-2;i++) {
  int j = i+1 ; // Start right after i.
  int k = n ;   // Start at the end of the array.

  while (k >= j) {
    // We got a match! All done.
    if (A[i] + A[j] + A[k] == sum){
    cout<<A[i]<<" "<<A[j]<<" "<<A[k]<<endl;
    }
    // We didn't match. Let's try to get a little closer:
    if(A[i]+A[j]+A[k]>sum){
        k--;
    }
    //   If the sum was too big, decrement k.
    if(A[i]+A[j]+A[k]<sum){
        j++;
    }
    //   If the sum was too small, increment j.
    (A[i] + A[j] + A[k] > 0) ? k-- : j++;
  }
  // When the while-loop finishes, j and k have passed each other and there's
  // no more useful combinations that we can try with this i.
}
}
}
*/
#include <iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	
	ll a[8];
	cin>>t;
	while(t--){
		for(int j=1;j<=7;j++){
			cin>>a[j];
		}
		cout<<a[1]<<" "<<a[2]<<" "<<a[7]-a[1]-a[2]<<endl;
	}
}