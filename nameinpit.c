#include <stdio.h>
 
int main()
{
 
    char name[50];
    scanf("%[^\n]%*c", name);
    // scanf("[^\n]%*c", name);
    printf("My name is %s\n",name);
 
 
  return 0;
}