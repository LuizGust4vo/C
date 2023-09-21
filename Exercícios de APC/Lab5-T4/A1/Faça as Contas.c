#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale (LC_ALL, "");

    int parcelas;
    char op;
    int fazconta (int parcelas, char op);
    int result = 0;

    printf ("Resultado = %d", fazconta (parcelas, op));

    return 0;
}

int fazconta (int parcelas, char op)
{

    int n[parcelas], result = 0;

    printf ("Digite o número de parcelas: ");
    scanf ("%d", &parcelas);

    printf ("Digite o operador: ");
    scanf ("%s", &op);

    for (int cont = 0; cont < parcelas; cont++)
    {
        printf ("Digite um número: ");
        scanf ("%d", &n[cont]);

        if (op == '+')
        {
            result+=n[cont];
        }

        else if (op == '-')
        {
            if (cont == 0) result = n[cont];
            if (cont >= 1) result = result - n[cont];
        }
    }

    return result;
}
