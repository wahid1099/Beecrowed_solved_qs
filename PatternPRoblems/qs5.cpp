// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

int n;
cin >> n;

for(int i = 1; i <=n; i++){
   if(i%2 != 0){
    for(int c=1;c<=n-i;c++){
        cout<<" ";
    }
    for(int j=1;j<=i; j++){
        cout<<"* ";
    }
    for(int c=1;c<=n-i;c++){
        cout<<"  ";
    }
     for(int j=1;j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;

   }
    
    
    
}

 

 for(int i = n-1; i >=0; i--){
   if(i%2 != 0){
    for(int c=i;c<=n-1;c++){
        cout<<" ";
    }
    for(int j=1;j<=i; j++){
        cout<<"* ";
    }
    for(int c=i;c<=n-1;c++){
        cout<<"  ";
    }
     for(int j=1;j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;

   }
    
    
    
}

 
 
  return 0;
}