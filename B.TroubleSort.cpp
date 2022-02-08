#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector <pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }
    bool f=true;
    for(int i=0;i<n-1;i++){
        if(v[i].first>v[i+1].first){
             f=false;
             break;
        }
    }
    if(f){
        cout<<"Yes"<<endl;
        return;
    }
    else{
        int z,o=0;
        for(int i=0;i<n;i++){
            if(v[i].second==0){
                z++;
            }
            else o++;
        }
        if(o&&z){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
int main(){
int t;
cin>>t;
while(t--){
solve();
}

return 0;
}