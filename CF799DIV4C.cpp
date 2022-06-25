#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <math.h>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test int t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    test{
        int r=0,c=0;
        char arr[9][9];
       for(int row=1;row<=8;row++){
          for(int col=1;col<=8;col++){
                 cin>>arr[row][col];
          }
       }
//  for(int row=1;row<=8;row++){
//           for(int col=1;col<=8;col++){
//                 //  cout<<arr[row][col];
//           }
//         //   cout<<endl;
//        }
       for(int row=2;row<=7;row++){
          for(int col=2;col<=7;col++){
                        if(arr[row][col]=='#'&&arr[row-1][col-1]=='#'&&arr[row-1][col+1]=='#'&&arr[row+1][col+1]=='#'&&arr[row+1][col-1]=='#'){
                            r = row;
                            c = col;
                            break;
                        }
                       }
       }
       cout<<r<<" "<<c<<endl;
    }
}