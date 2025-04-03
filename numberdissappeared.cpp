// Problem: Find the number that is not present in the array
// 1. You have to find the number that is not present in the array.

#include<bits/stdc++.h> 
#include<vector>
using namespace std; 

int main(){ 
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    vector<int>v2(n+1,0);
    for(int i=0;i<n;i++){
        v2[v[i]]=1;
    }
    for(int i=1;i<v2.size();i++){
if(v2[i]==0)cout<<i<<" ";
    }

return 0;
}