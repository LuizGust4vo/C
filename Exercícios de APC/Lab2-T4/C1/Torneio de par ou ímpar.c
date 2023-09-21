#include <stdio.h>

int main ()
{

    int E, P1, P2;
    char G1, G2;

    scanf ("%d %d %d", &E, &P1, &P2);
    if (E == 0 || E == 1){
    if (P1 >= 1 && P1 <= 10 && P2 >= 1 && P2 <= 10){
    if ((P1 + P2) % 2 == E) G1 = 'A';
    else G1 = 'B';
    }}

    scanf ("%d %d %d", &E, &P1, &P2);
    if (E == 0 || E == 1){
    if (P1 >= 1 && P1 <= 10 && P2 >= 1 && P2 <= 10){
    if ((P1 + P2) % 2 == E) G2 = 'C';
    else G2 = 'D';
    }}

    scanf ("%d %d %d", &E, &P1, &P2);
    if (E == 0 || E == 1){
    if (P1 >= 1 && P1 <= 10 && P2 >= 1 && P2 <= 10){
    if ((P1 + P2) % 2 == E)
    printf ("%c\n", G1);
    else
    printf ("%c\n", G2);
    }}

return 0;
}
