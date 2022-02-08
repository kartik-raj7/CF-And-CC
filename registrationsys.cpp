#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
#define ll long long 
using namespace std;
int main(){
	int n;
    cin>>n;
    map<string,int>m;
    string s;
	for(int i=0;i<n;i++)
	{
       cin>>s;
       m[s]++;
       if(m[s]==1)cout<<"OK"<<endl;
       else cout<<s<<m[s]-1<<endl;  
	}
}