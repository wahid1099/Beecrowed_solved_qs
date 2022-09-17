// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int a,b,c,temp;
cin >>a>>b>>c;

int num[3]={a,b,c};

// int min=num[0];
int sorted[3]= {a,b,c};

 for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(sorted[i] < sorted[j]){
                            temp = sorted[j];
                            sorted[j] = sorted[i];
                            sorted[i] = temp;
                    }
            }
    }


for(int i=0;i<3;i++){
    cout<<sorted[i]<<endl;
   

}
 
cout<<endl;

for(int i=0;i<3;i++){
    cout<<num[i]<<endl;
   

}
 
 
  return 0;
}