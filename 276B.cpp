#include <iostream>
#include <map>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
    map<char,int> b;
    int c=0;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        b[a[i]]++;
    }
    for(auto e:b){
    if(e.second%2!=0)c++;}
    if(c==0 || c%2!=0)cout<<"First\n";
    else
    cout<<"Second\n";
   }