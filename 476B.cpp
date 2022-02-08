/*#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <iomanip>
#define ll long long
using namespace std;
int main(){
string a,b;
cin>>a>>b;
map<char,int>a1;
map<char,int>b1;
for(int i=0;i<a.length();i++){
    a1[a[i]]++;
}
for(int i=0;i<b.length();i++){
    a1[b[i]]--;
}
double c = abs(a1['+']+a1['-']);
double k = abs(a1['?']);
if(c==k){
    if(c==0||k==0){
         cout<<1.000000000000<<endl;
    }
    else{
    double t=1/c;
    cout<<fixed<<setprecision(12)<<t<<endl;}
}
else k=0.0;
cout<<fixed<<setprecision(12)<<k<<endl;
//for(auto it = a1.begin(); it != a1.end(); ++it)
//{
  //cout << (*it).first << " " << (*it).second<< "\n";
//}
*/
#include<iostream>
#include<iomanip>
#include<cmath>
#include <string>
using namespace std;
int main()
{int n,i,p=0,m=0,q=0;
 double f[11];
 f[0]=1;
 for(i=1;i<=10;++i)
 f[i]=f[i-1]*i;
 string s,t;
 cin>>s>>t;
 n=s.length();
 for(i=0;i<n;++i)
 {if(s[i]=='+')
  ++p;
  else
  ++m;
 }
 for(i=0;i<n;++i)
 {if(t[i]=='?')
  ++q;
  else if(t[i]=='+')
  --p;
  else
  --m;
 }
 if(m>=0 && p>=0)
 cout<<fixed<<setprecision(9)<<(f[q]/(f[p]*f[q-p]))/pow(2,q);
 else
 cout<<"0.000000000";
 return 0;
}