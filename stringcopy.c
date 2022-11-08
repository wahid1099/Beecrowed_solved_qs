#include <stdio.h>
#include <string.h>
int main()
{
  char source[1000], destination[1000];

  printf("Input a string\n");
  gets(source);


  int i;
  for( i = 0; source[i]!='\0'; i++){

    destination[i] = source[i];

  }
  destination[i]='\0';
  printf("Source string: %s\n", source);
   printf("Destination string: %s\n", destination);

  return 0;
}