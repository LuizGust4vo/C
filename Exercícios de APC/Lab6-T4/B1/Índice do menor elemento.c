#include <stdio.h>

int main (){

int i, n, imenor = 0, v[10000];

scanf ("%d", &n);

for (i = 0; i < n; i++)
scanf ("%d", &v[i]);

for (i = 1; i < n; i++)
if (v[i] < v[imenor]) imenor = i;

printf ("%d", imenor);

return 0;
}
