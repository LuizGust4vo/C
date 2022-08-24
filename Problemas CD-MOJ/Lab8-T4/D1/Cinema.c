#include <stdio.h>

int main (){

int lfileira, clugares, i = 0;
char places[500][3], alf[20] = {"ABCDEFGHIJKLMNOPQRST"};

scanf ("%d %d", &lfileira, &clugares);
char cinema [lfileira][clugares];

for (int l = 0; l < lfileira; l++){
if (lfileira < 10) printf ("  0%d ", l + 1);
else printf ("%d ", l + 1);
}
for (int c = 0; c < clugares; c++){
printf ("\n%c", alf[c]);
}


return 0;
}
