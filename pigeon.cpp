#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pn puts("NO");
#define py puts("YES");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
        string str;
        cin>>str;
        int n= str.length();
        int R=0,L=0;
        for(int i=0;i<n;i++){
            if(str[i]=='R')R++;
            else L++;
        }
        // int R=count(str.begin(), str.end(), 'R');
        // int L=count(str.begin(), str.end(), 'L');
        if(R==0||L==0){
            cout<<0<<endl;
        }
        else{
            int k = (R>L)?L:R;
            cout<<k<<endl;
        }
        return 0;}
        