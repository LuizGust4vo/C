int main (){

    int n;

    scanf ("%d", &n);

    for (int a = 1; a <= n; a++){
        for (int b = 1; b <= a; b++){

            if (a < 10) printf ("0%d ", a);
            else printf ("%d ", a);
        }
        printf ("\n");
    }

    printf ("\n");

    for (int cont = 1; cont <= n; cont++){
        for (int cont1 = 1; cont1 <= cont; cont1++){

            if (cont1 < 10) printf ("0%d ", cont1);
            else printf ("%d ", cont1);
        }
        printf ("\n");
    }

    return 0;
}
