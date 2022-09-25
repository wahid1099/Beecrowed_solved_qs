// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cin>>n;
for(int i=0; i<n; i++){
   for(int k=n; k>i; k--){
    cout<<" ";
   }

    for(int j=1; j<=2*i+1; j++){
        cout<<"*";
    }
    cout<<endl;
  }
 

 ////////////////////////////////////////////////////////////////////////////////////////////////

 for(int i=n-1; i>=0; i--){
   for(int k=i; k<n; k++){
    cout<<" ";
   }

    for(int j=1; j<=2*i+1; j++){
        cout<<"*";
    }
    cout<<endl;
  }
 
 
  return 0;
}