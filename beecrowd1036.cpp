// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
double a,b,c;
cin >> a >> b >> c ;

cout<<fixed<<setprecision(5);

double temp=b*b-4*a*c;

if(temp<0 || a==0){
        cout << "Impossivel calcular\n";
}
 else{
    double r1=(-b+sqrt(temp))/(2*a);
    double r2=(-b-sqrt(temp))/(2*a);

    cout<<"R1 = "<<r1<<endl;
    cout<<"R2 = "<<r2<<endl;
 }
 
  return 0;
}