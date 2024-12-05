#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SecondLargest(vector<int>& arr){
        int fmax=INT_MIN;
        int smax=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(a[i]>fmax){
                smax=fmax;
                fmax=a[i];
            }
            else if(a[i]>smax && a[i]<fmax){
                smax=a[i];
            }
        }
        return smax==INT_MIN?-1:smax;
}
          
                
        
        
