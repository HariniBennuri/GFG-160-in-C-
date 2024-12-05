#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int moveend(vector<int>& arr){
  int n=arr.size();
  int pos=0;
  for(int i=0;i<n;i++){
    if(a[i]!=0){
      swap(a[i],a[pos]);
      pos++;
    }
  }
}
