/* Dynamic Programming C++ implementation
   of LIS problem */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
/* lis() returns the length of the longest
  increasing subsequence in arr[] of size n */
// int lis(int arr[], int n)
// {
    
// }
 
/* Driver program to test above function */
int main()
{
    int n;
    cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lis[n];
 
    lis[0] = 1;
    vector<int> v;
    /* Compute optimized LIS values in
       bottom up manner */
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++){
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
        }

    }
 
    // Return maximum value in lis[]
    cout<<*max_element(lis, lis + n)<<endl;
    // v.push_back(arr[0]);
    for(int i=0;i<n-1;i++){
        if(lis[i+1]-lis[i]==1){
          v.push_back(arr[i]);
        //   v.push_back(arr[i+1]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

 
    return 0;
}