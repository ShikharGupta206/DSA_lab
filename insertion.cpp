#include <bits/stdc++.h>
#include<iostream>
using namespace std;
// insertion
int main()
{
    int n,i;
    cout<<"Enter size of array"<<endl;
    cin>>n;
  int arr[n],target;
  cout<<"enter the sorted array:"<<endl;
  for(i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"target element"<<endl;
  cin>>target;
  for(i=n-1;i>=0;i--){
      if(target<arr[i]){
          arr[i+1]=arr[i];
          }
          else {
            break;
            }
      }
       
  
  arr[i+1]=target;
  n++;
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  

    return 0;
}
