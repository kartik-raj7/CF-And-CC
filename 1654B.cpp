#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
		cin>>s;
        map<char,int>m;
		for(int i=0;i<s.size();i++){
			m[s[i]-'a']++;
		}
		loop(i,0,s.length()){
			if(m[s[i]-'a']>=2){
				m[s[i]-'a']--;
			}else{
				for(int j=i;j<s.size();j++){
					cout<<s[j];
				}
				cout<<endl;
				break;
			}
		}
	}
    }