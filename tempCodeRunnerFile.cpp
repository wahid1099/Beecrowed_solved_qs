// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
double a,b;
cin>>a>>b;

if(a>0 && b>0){
    cout<<"Q1"<<endl;

}else if(a<0 && b>0){
    cout<<"Q2"<<endl;

}else if(a<0 && b<0){
    cout<<"Q3"<<endl;
}else{
    cout<<"Q4"<<endl;
}
 
 
  return 0;
}