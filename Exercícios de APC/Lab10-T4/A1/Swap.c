#include <stdio.h>

void swap (int *a, int *b){

int c;

c = *a;
*a = *b;
*b = c;
}

int main (){

int p1 = 100, p2 = 150;

printf ("Antes: %d %d", p1, p2);
swap (&p1, &p2);
printf ("\nDepois: %d %d\n", p1, p2);

return 0;
}
