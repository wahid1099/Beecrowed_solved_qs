// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
   int x,y;
   cin >> x >> y;
   if(x<y){
     for (int i = x; i <y; i++)
   {
    if(i%5==2 ||  i%5==3){
        printf("%d\n",i);
   } 
   }

   }
   else if(x>y){
     for (int i = y; i <x; i++)
   {
    if(i%5==2 ||  i%5==3){
        printf("%d\n",i);
   } 

   }
   }
  
 
  return 0;
}