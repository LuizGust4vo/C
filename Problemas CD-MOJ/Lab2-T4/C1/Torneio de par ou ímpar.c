#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "");

    int E1, A, B, S1;
    int E2, C, D, S2;
    int E3, G1, G2, S3;

    scanf ("%d %d %d", &E1, &A, &B);
    scanf ("%d %d %d", &E2, &C, &D);

    S1 = A + B;

    if (E1 == 0 && S1%2 == 0){
        printf ("A ganhou, par!");
        G1 = A;
    }
    else if (E1 == 0 && S1%2 != 0){
        printf ("B ganhou, ímpar!");
        G1 = B;
    }
    if (E1 == 1 && S1%2 == 0){
        printf ("B ganhou, par!");
        G1 = B;
    }
    else if (E1 == 1 && S1%2 != 0){
        printf ("A ganhou, ímpar!");
        G1 = A;
    }

    S2 = C + D;

    if (E2 == 0 && S2%2 == 0){
        printf ("\nC ganhou, par!");
        G2 = C;
    }
    else if (E2 == 0 && S2%2 != 0){
        printf ("\nD ganhou, ímpar!");
        G2 = D;
    }
    if (E2 == 1 && S2%2 == 0){
        printf ("\nD ganhou, par!");
        G2 = D;
    }
    else if (E2 == 1 && S2%2 != 0){
        printf ("\nC ganhou, ímpar!");
        G2 = C;
    }


    if (G1 == A && G2 == C){
        scanf ("%d %d %d", &E3, &G1, &G2);
        S3 = G1 + G2;
        if (E3 == 0 && S3%2 == 0){
            printf ("A");
    }}

else if (G1 == A && G2 == D){
    scanf ("%d %d %d", &E3, &G1, &G2);
    S3 = G1 + G2;
    if (E3 == 0 && S3%2 != 0){
        printf ("D");
}}

else if (G2 == B && G2 == C){
    scanf ("%d %d %d", &E3, &G1, &G2);
    S3 = G1 + G2;
    if (E3 == 0 && S3%2 == 0){
        printf ("B");
}}

else if (G2 == B && G2 == D){
    scanf ("%d %d %d", &E3, &G1, &G2);
    S3 = G1 + G2;
    if (E3 == 0 && S3%2 != 0){
        printf ("D");
}}

return 0;
}
