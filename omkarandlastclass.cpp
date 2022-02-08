#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;
void solve(){
    int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;;
        }
        else {
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    cout<<n/i<<" "<<(n-(n/i))<<endl;
                    return ;
                }
            }
            cout<<1<<" "<<n-1<<"\n";

        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve(); 
    }
}