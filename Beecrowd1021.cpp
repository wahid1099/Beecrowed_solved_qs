// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
     cout << fixed << setprecision(2);

  double ammount;
  cin>>ammount;

  int temp = ammount*100;

   int t=temp/100;
 int p=temp%100;

 

 cout<<"NOTAS:\n";
 int notes[6]={100,50,20,10,5,2};

 for(int i=0;i<6;i++){
    cout<<t/notes[i]<<" nota(s) de R$ "<< notes[i]<<".00"<<endl;
    t=t%notes[i];

 }

 p=(t*100)+p;

 cout<<"MOEDAS:"<<endl;

  int coins[6]={100,50,25,10,5,1};

 for(int i=0;i<6;i++){
    cout<<p/coins[i]<<" moeda(s) de R$ "<< coins[i]/100.0<<"\n";
    p=p%coins[i];

 }


 
  return 0;
}