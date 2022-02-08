#include <string.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#define pb push_back
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count =0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                count++;
            }
        }
        if(k>=count){
            if((k-count)%2==0)
            cout<<"YES"<<endl;
            else if(n%2!=0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;}
    /*
        if(count>0&&k<0){
        cout<<"NO"<<endl;
    }
    else if(count==0){
        cout<<"YES"<<endl;
    }
    else if(count<=k){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
return 0;
}*/
        /*
        vector<char>a(n),p(n);
        for(ll i=0;i<n;i++){
            char c;
            cin>>c;
            a.pb(c);
            p.pb(c);
        }
        reverse(p.begin(),p.end()+n);
    for(ll i=0;i<n;i++){
        if(a[i]!=p[i]){
            count++;
        }
    }
    if(count>0&&k<0){
        cout<<"NO"<<endl;
    }
    else if(count==0){
        cout<<"YES"<<endl;
    }
    else if(count<=k){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
return 0;
}*/