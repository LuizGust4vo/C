#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int tempo;
    int qntdGolpe, i;

    scanf("%llu %d", &tempo, &qntdGolpe);

    for(i = 0; i < qntdGolpe; i++)
    {
        tempo = sqrt(tempo);
        if(tempo%2 != 0)
        {
            tempo = ((2*tempo)-1);
            tempo=(tempo*tempo);
        }

        else
        {
            if(tempo%2==0)
            {
                tempo = (((2*tempo)-1)/2);
                tempo=(tempo*tempo);
            }
        }
        printf("%llu\n",tempo);
    }

    return 0;
}
