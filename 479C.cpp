#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <iomanip>
#include <unordered_map>
#define pb push_back
#include <unordered_set>
#define ll long long
using namespace std;
int main(){
int n;
cin>>n;
vector <pair<int,int> > a;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    a.pb(make_pair(x,y));
}
sort(a.begin(),a.end());
int sol=0;
for(int i=0;i<n;i++){
    if(sol>a[i].second){
    sol=max(sol,a[i].first);
    }
    else{
        sol=max(sol,a[i].second);
    }
}
    cout<<sol<<endl;

}