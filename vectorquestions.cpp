// find kth largest element in an array
// 1. You have to find the kth largest element in an array.

#include<iostream> 
#include<vector>
#include<bits/stdc++.h>
using namespace std; 

int main(){
int n,k;
cin>>n>>k;
vector<int> v1(n);
for(int i=0;i<n;i++){
        cin>>v1[i]; 
    }
    

sort(v1.begin(),v1.end());
cout<<v1[n-k]<<endl;







    return 0;
}