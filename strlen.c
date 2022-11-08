#include <stdio.h>
int main()
{
    char s[] = "Dhiraj";
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    printf("length of string is %d\n", i);
    return 0;
}