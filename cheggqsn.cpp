#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <limits>
#define pb push_back
#include <map>
#include <string.h>
#define pn puts("No");
#define py puts("Yes");
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
int main(){
    string grade;//declaring marks
    int marks=0;//declaring marks variable
    cin>>marks;//inputing marks from user
    if(marks>=90){grade="0xA";}//applying conditions if marks is greater than 90
    else if(marks>=70&&marks<90){grade="0xB";}//applying conditions if marks is less than 90 and greater than 70
    else if(marks>=50&&marks<70){grade="0xC";}//applying conditions if marks is less than 70 and greater than 50
    else {grade="OXF";}//if marks is less than 50
    cout<<grade;//printing the grade 
return 0;
}