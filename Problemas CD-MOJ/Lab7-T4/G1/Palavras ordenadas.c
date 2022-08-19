#include <stdio.h>

int main (){

int T, a = 0, i = 0, s = 0;
char str1[100], str2[100];

scanf ("%d", &T);

for (int cont = 0; cont <= T; cont++){
fgets (str1, 42, stdin);

    do
    {
        i++;
    }
    while (str1[i] != '\0');
a = a + i;
printf ("\n%d", a);

for (int cont3 = 0; cont3 <= a; cont3++){
if (str1[cont3] == '\n'){
for (int cont1 = s; cont1 < (i + a); cont1++){
str2[cont1] = str1[cont1];
}}}
s = a;
i = 0;
}


for (int cont2 = 0; cont2 <= a; cont2++){
printf ("%c", str2[cont2]);
}

return 0;
}
