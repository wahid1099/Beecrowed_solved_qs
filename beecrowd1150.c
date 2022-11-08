#include<stdio.h>

int main()

{

    int x, z,a = 1,c = 0, i;

    scanf("%d %d", &x, &z);

    while(x >= z){

        scanf("%d", &z);

    }

    for(i = x;i < z;i++){

        c += i;//3+4+5+6+7

        if(c > z)break;

        a++;

    }

    printf("%d\n", a);

    return 0;

}