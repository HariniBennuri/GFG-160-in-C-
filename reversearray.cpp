#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverseArray(vector<int>& arr){
  int n=arr.size();
  int p=n-1;
  for(int i=0;i<n/2;i++){
    swap(arr[i],arr[p]);
    p--;
  }
}
