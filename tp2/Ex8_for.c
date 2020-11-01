#include <stdio.h>

void main()
{
    int  N;      /* La donnée   */

    int  I;      /* Le compteur */
    double FACT = 1.0; /* La factorielle N! - Type double à */
    do
    {

      printf("Entrez un entier naturel : ");

     scanf("%d", &N);

    }
    while (N<0);
    for (I=1 ; I<=N ; I++){
        FACT *= I;
    }
    printf ("%d! = %.0f\n", N, FACT);

}