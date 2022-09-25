// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cin>>n;

for(int i=n; i>=0; i--){
    for(int k=n; k>i/2-1; k--){
    cout<<" ";
   }
    for(int j=1; j<=i;j++){
        if(i%2 !=0){
            cout<<"@ ";
        }

    }
    if(i!=0){
   cout<<endl;
    }
   
}


for(int i=2; i<=n; i++){
   
 for(int k=1; k<=n; k++){
    cout<<" ";
   
     }

   
    for(int j=1; j<=i;j++){
        if(i%2 !=0){
            cout<<" @";
        }

    }
   cout<<endl;
}
 
 
 
  return 0;
}