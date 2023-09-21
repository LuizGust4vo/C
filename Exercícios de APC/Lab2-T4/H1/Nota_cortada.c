#include <stdio.h>
#include <locale.h>

int main (){

setlocale(LC_ALL, "");

int B, T;
float areaT, areaE, areaD;

printf ("Digite o valor de corte a partir da base: ");
scanf ("%d", &B);
printf ("Digite o valor de corte a partir do topo: ");
scanf ("%d", &T);

areaT = 70 * 160;
printf ("\nÁrea Total = %f\n", areaT);
areaE = (B * 70) + (((T - B) * 70) / 2);
printf ("\nÁrea do Eduardo = %f\n", areaE);
areaD = ((160 - T) * 70) + (((T - B) * 70) / 2);
printf ("\nÁrea da Daiane = %f\n", areaD);

if (areaE > areaD){
printf ("\n1");
}
else if (areaD > areaE){
printf ("\n2");
}
else{
printf ("\n0");
}

return 0;
}
