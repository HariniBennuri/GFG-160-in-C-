#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Rotatebyd(vector<int> & arr, int d){
  int n=arr.size();
  d=d%n;
  reverse(arr.begin(),arr.begin()+d);
  reverse(arr.bgein()+d,arr.end());
  reverse(arr.begin(),arr.end());
}
