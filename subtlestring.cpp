#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string k;
    cin>>k;int suma=0,sumb=0,suma1=0,sumb1=0;
    int n = k.length();
    if(n==1){
        cout<<"Bob"<<" "<<k[0]-'a'+1<<endl;
    }
    else if(n%2==0){
        loop(i,0,n){
            suma+=k[i]-'a'+1;
        }
        cout<<"Alice"<<" "<<suma<<endl;
    }
    else {
        loop(i,1,n){
             suma+=k[i]-'a'+1;
        }
        sumb=k[0]-'a'+1;
        loop(i,0,n-1){
            suma1+=k[i]-'a'+1;
        }
        sumb1=k[n-1]-'a'+1;
        if(suma>suma1){
            if(suma>sumb){
                cout<<"Alice"<<" "<<suma-sumb<<endl;
                }
            else cout<<"Bob"<<" "<<sumb-suma<<endl;
        }
        else{
            if(suma1>sumb1){
                cout<<"Alice"<<" "<<suma1-sumb1<<endl;
            }
            else cout<<"Bob"<<" "<<sumb1-suma1<<endl;
        }
    }




    }
return 0;
}