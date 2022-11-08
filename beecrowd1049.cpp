#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    int dif;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    dif = ((b*60)+d) - ((a*60)+c);
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}

// for (7 8 9 10 2) hour 2 minitue
// 8*60+2=482 7*60+9=429
//482-429 > 0