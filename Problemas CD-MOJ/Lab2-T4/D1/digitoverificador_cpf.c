#include <stdio.h>

int main (){

long int cpf;
int dv1, dv2, soma1, soma2, resto;

printf ("Digite o CPF: ");
scanf ("%ld", &cpf);

soma1 = 2 * (cpf % 10);
soma2 = 3 * (cpf % 10);
cpf /= 10;

soma1 += 3 * (cpf % 10);
soma2 += 4 * (cpf % 10);
cpf /= 10;

soma1 += 4 * (cpf % 10);
soma2 += 5 * (cpf % 10);
cpf /= 10;

soma1 += 5 * (cpf % 10);
soma2 += 6 * (cpf % 10);
cpf /= 10;

soma1 += 6 * (cpf % 10);
soma2 += 7 * (cpf % 10);
cpf /= 10;

soma1 += 7 * (cpf % 10);
soma2 += 8 * (cpf % 10);
cpf /= 10;

soma1 += 8 * (cpf % 10);
soma2 += 9 * (cpf % 10);
cpf /= 10;

soma1 += 9 * (cpf % 10);
soma2 += 10 * (cpf % 10);
cpf /= 10;

soma1 += 10 * (cpf % 10);
soma2 += 11 * (cpf % 10);
cpf /= 10;

resto = soma1 % 11;

if (resto == 0 || resto == 1){
    dv1 = 0;
}

else{
    dv1 = 11 - resto;
}

soma2 += 2  * dv1;
resto = soma2 % 11;

if (resto == 0 || resto == 1){
    dv2 = 0;
}

else{
    dv2 = 11 - resto;
}

printf("\n%d %d\n", dv1, dv2);

return 0;
}
