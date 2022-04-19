#include <iostream>
#include <string.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
bool check(string st, int low, int high){
    while(low <= high){
        if(st[low++] != st[high--]) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        queue<int> qu;
        for(int i = 0; i < n; i ++){
            if(str[i] == ')') qu.push(i);
        }

        int ind = 0;
        int res = 0;
        while(ind < n){
            if(ind == n-1) break;
            if(str[ind] == str[ind+1]){
                ind+=2; res++;
            }
            else if(str[ind] == '(' && str[ind+1] == ')'){
                ind+= 2; res++;
            }
            else if(str[ind] == ')'){
                bool got = false;
                while(!qu.empty()){
                    int f = qu.front();
                    qu.pop();
                    if(f > ind){
                        if(check(str,ind,f)){
                            res++;
                            ind = f+1;
                            got = true;
                            break;
                            
                        }
                    }
                }
                if(got == false) break;
            }
        }


        cout <<res<<" "<<n-ind<<endl;

}
}


