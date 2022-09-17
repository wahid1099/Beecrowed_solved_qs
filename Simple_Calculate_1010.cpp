// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

 
   int p1Code,p2Code,P1unit,p2Unit;
   double p1price,p2price;
   cin>>p1Code>>P1unit>>p1price;
   cin>>p2Code>>p2Unit>>p2price;

   double totalPrice;
   totalPrice=(p1price*P1unit)+(p2price*p2Unit);
   cout<<fixed;
   cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<totalPrice<<endl;
 
  return 0;
}