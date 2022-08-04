#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int n;
        cin>>n;
        string str;
        cin>>str;
        int zero=0,one=0;
        int temp1=0,temp2=0;
        for(auto i:str){
            if(i=='1')one++;
            else zero++;
        }
        for(int i=0;i<str.length();i++){
           if(str[i]=='0'){
              temp1++;
           }
           else break;
        }
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]=='1'){
                temp2++;
            }
            else break;
        }
        if(n==1){
            cout<<str<<endl;
        }
        else if(temp1==zero){
            cout<<str<<endl;
        }
        else if(temp2==one){
            cout<<0<<endl;
        }
        else{
            string ans="";
            for(int i=0;i<temp1;i++){
                ans+='0';
            }
            ans+='0';
            for(int i=0;i<temp2;i++){
                ans+='1';
            }
            cout<<ans<<endl;
            // if(temp2==1){
            //     cout<<0<<endl;
            // }
            // string ans(temp1+1,'0');
            // ans+='1';
            // cout<<ans<<endl;
        }

    }
}