#include <iostream>
using namespace std;
#define ll long long
void solve(){
ll n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(n==1||n==2){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
else if(arr[0]==n){
   cout<<arr[0]<<" ";
   for(int i=n-1;i>0;i--){
      cout<<arr[i]<<" ";
   }
   cout<<"\n";
}
else if(arr[n-1]==n){
    for(int i=n-2;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1]<<endl;
}
else cout<<-1<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
    solve();
}
return 0;
}