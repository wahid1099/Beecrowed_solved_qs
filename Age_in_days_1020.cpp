// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

int days;
cin>>days;
int year =days/365;

days = days%365;

int month =days/30;

days = days%30;

cout<<year <<" anos(s)"<<endl
     <<month<<" mes(es)"<<endl
     <<days<<" dia(s)"<<endl;
  return 0;
}