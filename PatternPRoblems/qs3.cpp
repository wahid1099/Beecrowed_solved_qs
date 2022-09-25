// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
  int n;
  cin >> n;


  for (int i = 1; i <=n;i++){
      bool found=true;
    for(int j=1; j <=n; j++){
        if(i == j){
           cout <<"$ ";
           found=false;
        } 

       else if(found){
            cout << "# ";
        }
       else {
        cout <<"@ ";
       }

    }
    cout << endl;

  }
 
 
  return 0;
}