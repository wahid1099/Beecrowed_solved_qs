// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int x,y;
 cin>>x>>y;
cout<<fixed<< setprecision(2);
 switch(x){
    case 1:
    cout<<"Total: R$ "<<y*4.00<<endl;
    break;

     case 2:
    cout<<"Total: R$ "<<y*4.50<<endl;
    break;


     case 3:
    cout<<"Total: R$ "<<y*5.00<<endl;
    break;

     case 4:
    cout<<"Total: R$ "<<y*2.00<<endl;
    break;

     case 5:
    cout<<"Total: R$ "<<y*1.50<<endl;
    break;

    default:
    break;
    

 }
 
 
  return 0;
}