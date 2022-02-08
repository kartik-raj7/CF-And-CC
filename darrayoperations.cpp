/*#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];int c[n];
    int ans=0;int i=0,e=n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c[i]=arr[i];
    }
    sort(arr+1,arr+n+1);
      e=n-1;
      for(i=0;i<k;i++){
        ans=(ans*arr[e]+arr[i])/arr[e];
        e--;
      }
      for(int j=1;j<=n-k;j++){
          ans+=arr[j];
      }  
    cout<<ans<<endl;}
}
*/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int t, n, k, a[109];
int main() {
	cin >> t;
	while(t--) {
		int ans = 0;
		cin >> n >> k;
		k *= 2;
		for(int i=1;i<=n;i++){
        cin >> a[i];}
		sort(a+1, a+n+1);
		int r = n-(k/2)+1;
		for(int i=n-k+1;i<=n-k/2;i++) {
			ans += (a[i]/a[r]);
			r++;
		}
		for(int i=1;i<=n-k;i++) {
            ans += a[i];}
		cout<<ans<<endl;
	}
	return 0;
}