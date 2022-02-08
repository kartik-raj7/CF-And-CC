#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
string str;
cin>>str;
int f=0;
for(char i:str){
    if((i-'0')%2==0)
    {f=1;}
}
if(f){
    int c=str.length();
    for(int i=0;i<c-1;i++){
        if((str[i]-'0')%2==0)
            {
                if(str[i]<str[c-1])
                {
                    swap(str[i],str[c-1]);
                    break;
    }
}
}
  if((str[c-1]-'0')%2!=0)
        {
            for(int i=c-2;i>-1;i--)
            {
                if((str[i]-'0')%2==0)
                {
                    swap(str[i],str[c-1]);
                    break;
                }
            }
        }
        cout<<str<<"\n";
    }
    else
    {
        cout<<"-1\n";
    }
    return 0;
}