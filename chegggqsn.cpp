#include <iostream>
using namespace std;
int main(){
    int n,v;
    cin>>n>>v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]+arr[j]==v){
                break;
            }
        }
    }
}