// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

 int n,i,j;
 cin>>n;
  for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  
                cout<<"#";
            else
               cout<<" ";
            if(i >= (2 * n - 1) - j)  
                cout<<"&";
            else
               cout<<" ";
        }
        cout<<endl;
    }
 
  return 0;
}